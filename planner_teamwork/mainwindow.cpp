
﻿#include "mainwindow.h"
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
     this->setMinimumSize(1000,600);
    on_actiona_triggered();

    connectDB();//打开数据库

    intitData();//设置重要性下拉菜单

    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->tableView,&table::releaseSign,this,&MainWindow::showText);
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
void MainWindow::showText(int i){

    QWidget *dlg=new QWidget(this);
    //dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->setMinimumSize(500,500);
//    QLabel lable(dlg);
//    lable.setText("hello");
//    lable.show();

//    QTextEdit edit(dlg);
    dlg->show();
    //qDebug()<<i<<i;
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
    db.setDatabaseName("test.db");

    if(!db.open()){
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    if(!db.tables().contains("inportance")){
        setInportance();
    }

    QSqlQuery sql(db);
    sql.exec("create table tasks(任务,重要性,开始时间,结束时间,详情)");
    model=new QSqlTableModel(this);
    model->setTable("tasks");
    ui->tableView->setModel(model);
    //model->removeColumn(3);
    model->select();
}
void MainWindow::setInportance(){    //设置重要性表单
    QSqlQuery sql(db);
    sql.exec("create table inportance(inportance)");
    sql.exec("insert into inportance values (\"A\")");
    sql.exec("insert into inportance values (\"B\")");
    sql.exec("insert into inportance values (\"C\")");
    sql.exec("insert into inportance values (\"D\")");
}

void MainWindow::intitData(){
    QSqlQueryModel *queryModel=new QSqlQueryModel(this);
    queryModel->setQuery("select inportance from inportance");
    ui->comboBox->setModel(queryModel);
}

void MainWindow::on_ok_clicked()
{
    if(!ui->lineEdit->text().isEmpty()&&!ui->textEdit->toPlainText().isEmpty()){
        QSqlQuery sql(db);
        //sql.exec("create table tasks(任务,重要性,开始时间,结束时间,详情)");
        sql.exec(QString("insert into tasks values('%1','%2','%3','%4','%5')")
                 .arg(ui->lineEdit->text()).arg(ui->comboBox->currentText()).arg(ui->dateTimeEdit->dateTime().toString()).arg(ui->dateTimeEdit_2->dateTime().toString()).arg(ui->textEdit->toPlainText()));

        model=new QSqlTableModel(this);
        model->setTable("tasks");
        ui->tableView->setModel(model);
        //model->removeColumn(3);
        model->select();

        ui->toolBox->setCurrentWidget(ui->page_3);

        on_cansle_clicked();

    }
}


void MainWindow::on_cansle_clicked()
{
    ui->lineEdit->clear();
    /*添加时间等清除操作*/
}

//void MainWindow::mouseReleaseEvent(QMouseEvent *event){
//    int curRow = ui->tableView->currentIndex().row();
//    qDebug()<<curRow;
//}
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

