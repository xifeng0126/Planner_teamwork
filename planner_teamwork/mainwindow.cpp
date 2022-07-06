#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QDateTimeEdit>
#include<QTableView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&m_start,&startui::login_start,[=](){//测试初始登录界面
        m_login.show();
    });
    connect(&m_start,&startui::sign_start,[=](){
        m_sign.show();
    });
    connect(&m_login,&login::checkStart,[=](){
        table_name =  m_logincheck();
    });
    connect(&m_sign,&signup::checkStart,[=](){
        table_name = m_signcheck();
    });
    connect(this,&MainWindow::appStart,[=](){
        m_sign.close();
        show();
    });
    connect(this,&MainWindow::appStart,[=](){
        m_login.close();
        show();
    });
    if(!system_db.open()){
        connectUSER();
    }
    system_db.open();
    m_start.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_actiona_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->task);
}

void MainWindow::on_actionb_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->calc);
}

void MainWindow::connectUSER(){
    system_db=QSqlDatabase::addDatabase("QSQLITE");
    system_db.setDatabaseName("system.db");

    if(!system_db.open()){
        QMessageBox::warning(this,"错误",system_db.lastError().text());
        return;
    }

    QSqlQuery sql(system_db);
    sql.exec("create table users(username text not null,password text not null)");
    sql.exec("insert into users values ('admin','12345')");
}
void MainWindow::connectDB(){
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("mydatabase.db");

    if(!db.open()){
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    QSqlQuery sql(db);
    sql.exec("create table tasks(任务,重要性,开始时间,结束时间)");
    model=new QSqlTableModel(this);
    model->setTable("tasks");
    ui->tableView->setModel(model);
    model->select();
}

void MainWindow::intitData(){
    QSqlQueryModel *queryModel=new QSqlQueryModel(this);
    queryModel->setQuery("select inportance from inportance");
    ui->comboBox->setModel(queryModel);
}

void MainWindow::on_ok_clicked()
{
    if(!ui->lineEdit->text().isEmpty()||ui->comboBox->currentText().compare(QString::fromLocal8Bit("选择重要性"))==false){
        QSqlQuery sql(db);
        //sql.exec("create table tasks(任务,重要性,开始时间,结束时间)");
        sql.exec(QString("insert into tasks values('%1','%2','%3','%4')")
                 .arg(ui->lineEdit->text()).arg(ui->comboBox->currentText()).arg(ui->dateTimeEdit->dateTime().toString()).arg(ui->dateTimeEdit_2->dateTime().toString()));

        model=new QSqlTableModel(this);
        model->setTable("tasks");
        ui->tableView->setModel(model);
        model->select();

        ui->lineEdit->clear();

    }


}


void MainWindow::on_cansle_clicked()
{

}
QString MainWindow::m_logincheck()
{

if(QueryUserData_1())
    return login::user;
else{
     QMessageBox::warning(&m_login,"错误","账号或密码错误");
     return NULL;
   }
}
QString  MainWindow::m_signcheck(){
if(QueryUserData_2()){
    QSqlQuery sql(system_db);
    sql.exec("insert into users values ("+m_sign.user+","+m_sign.pass+")");
    return m_sign.user;
}
else{
     QMessageBox::warning(&m_login,"错误","用户名已存在！");
     return NULL;
   }
}
bool MainWindow::QueryUserData_2(){
    QSqlQuery sql_query(system_db);
    if(!sql_query.exec("select username from users"))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            QString username = sql_query.value(0).toString();
            if(m_sign.check(username)){
                continue;
            qDebug()<<QString("username:%1).arg(username)");
            }
            else
                return false;
        }
        appStart();
        return true;
    }
}
bool MainWindow::QueryUserData_1()//遍历查询
{
    QSqlQuery sql_query(system_db);
    if(!sql_query.exec("select username,password from users"))
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            QString username = sql_query.value(0).toString();
            QString password = sql_query.value(1).toString();
            if(m_login.check(username,password))
                appStart();
                return true;
            qDebug()<<QString("username:%1    password:%2").arg(username).arg(password);
        }
    }
    return false;
}
