#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"textwidget.h"
#include<QWidget>
#include<QApplication>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QDateTimeEdit>
#include<QTableView>
#include<QHeaderView>
#include<QDebug>
#include<QDialog>
#include<QLabel>
#include<QTextEdit>
#include<QSqlRecord>
#include<QModelIndex>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    model=new QSqlTableModel(this);
//    model->setTable("tasks");
//    ui->tableView->setModel(model);
//    model->select();

    this->setMinimumSize(1500,1000);

    on_actiona_triggered();





    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->tableView,&table::releaseSign,this,&MainWindow::wetherComplete);  //设置右键点击显示对话框
    connect(ui->tableView_2,&table::releaseSign,this,&MainWindow::completed);    //同上

    connect(&m_start,&startui::login_start,[=](){//测试初始登录界面
        m_login.show();
    });
    connect(&m_start,&startui::sign_start,[=](){
        m_sign.show();
    });
    connect(&m_login,&login::returnToSignUp,[=](){
        m_sign.show();
    });
    connect(&m_login,&login::checkStart,[=](){
        user_name =  m_logincheck();
        connectDB(user_name);
    });
    connect(&m_sign,&signup::returnTologIn,[=](){
        m_login.show();
    });
    connect(&m_sign,&signup::checkStart,[=](){
        user_name = m_signcheck();
        connectDB(user_name);
    });

    //connectDB(user_name);//打开数据库

    connect(this,&MainWindow::appStart,[=](){
        m_sign.close();
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
    db.close();
}

void MainWindow::wetherComplete(int i,bool b){  //未完成界面对话框，确定时将第i行的complete值改成yes

    if(b){
        int a=QMessageBox::question(this,"完成","是否完成此项？",QMessageBox::Yes,QMessageBox::No);
        if(a==QMessageBox::Yes){
            QSqlRecord record = model->record(i);
            record.setValue("complete","yes");
            model->setRecord(i,record);

            model->database().transaction();
            model->submitAll();
            //qDebug()<<i;
            //connectDB();
            model->database().commit();
            setModel();
        }
    }
    if(!b){
        tWidget=new textWidget;
        QModelIndex index=model->index(i,4);
        QString str=model->data(index).toString();
        tWidget->setText(str);
        tWidget->show();

        tWidget->setAttribute(Qt::WA_DeleteOnClose);

        //tWidget->ui->pushButton->num=i;
        //tWidget->setButtonNum(i);
//        if(Delete_is_clicked){
//            tWidget->close();
//        }

        //tWidget->send(i);
    }

}


//完成界面对话框，确定时将第i行的complete值改成no
void MainWindow::completed(int i,bool b){
    if(b){
        int a=QMessageBox::question(this,"未完成","此项还未完成？",QMessageBox::Yes,QMessageBox::No);
        if(a==QMessageBox::Yes){
            QSqlRecord record = model2->record(i);
            record.setValue("complete","no");
            model2->setRecord(i,record);
            model2->database().transaction();
            model2->submitAll();
            model2->database().commit();
            setModel();
        }
    }
    if(!b){
        tWidget=new textWidget;
        QModelIndex index=model2->index(i,4);
        QString str=model2->data(index).toString();
        tWidget->setText(str);
        tWidget->show();


    }

}

void MainWindow::on_actiona_triggered()   //学习任务界面
{
    ui->stackedWidget->setCurrentWidget(ui->task);
    ui->toolBox->setCurrentWidget(ui->page_3);
}

void MainWindow::on_actionb_triggered()   //统计界面（未完成）
{
    ui->stackedWidget->setCurrentWidget(ui->calc);
}

//打开数据库
void MainWindow::connectDB(QString str){
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QString("%1.db").arg(str));

    if(!db.open()){
        QMessageBox::warning(this,"错误",db.lastError().text());
        return;
    }

    if(!db.tables().contains("inportance")){
        setInportance();
    }
    if(!db.tables().contains("tasks")){
        flag=false;
    }

    intitData();//设置优先级下拉菜单

    QSqlQuery sql(db);
    sql.exec("create table tasks(任务,优先级,开始时间,结束时间,详情,complete)");
    setModel();
}


//将数据库显示到tableView中
void MainWindow::setModel(){
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    model=new QSqlTableModel(this);
    model2=new QSqlTableModel(this);
    model->setTable("tasks");
    model2->setTable("tasks");

//    model->removeColumn(4);
//    model2->removeColumn(4);


    model->setFilter("complete='no'");
    model->select();
    ui->tableView->setModel(model);


    model2->setFilter("complete='yes'");
    model2->select();
    ui->tableView_2->setModel(model2);

    WaitComplete=model->rowCount();
    Completed=model2->rowCount();

    if(!flag){
        setProgress(0,0);
    }

    setProgress(WaitComplete,Completed);
}

void MainWindow::setInportance(){    //设置优先级表单
    QSqlQuery sql(db);
    sql.exec("create table inportance(inportance)");
    sql.exec("insert into inportance values (\"A\")");
    sql.exec("insert into inportance values (\"B\")");
    sql.exec("insert into inportance values (\"C\")");
    sql.exec("insert into inportance values (\"D\")");
    sql.exec("insert into inportance values (\"E\")");
    sql.exec("insert into inportance values (\"F\")");
}

//设置下拉框
void MainWindow::intitData(){
    QSqlQueryModel *queryModel=new QSqlQueryModel(this);
    queryModel->setQuery("select inportance from inportance");
    ui->comboBox->setModel(queryModel);
}

//添加任务界面确定按钮
void MainWindow::on_ok_clicked()
{
    if(!ui->lineEdit->text().isEmpty()&&!ui->textEdit->toPlainText().isEmpty()){
        QSqlQuery sql(db);
        sql.exec("create table tasks(任务,优先级,开始时间,结束时间,详情,complete)");
        sql.exec(QString("insert into tasks values('%1','%2','%3','%4','%5',\"no\")")
                 .arg(ui->lineEdit->text()).arg(ui->comboBox->currentText()).arg(ui->dateTimeEdit->dateTime().toString()).arg(ui->dateTimeEdit_2->dateTime().toString()).arg(ui->textEdit->toPlainText()));

//        model=new QSqlTableModel(this);
//        model->setTable("tasks");

//        //model->removeColumn(3);

//        model->setFilter("complete='no'");
//        model->select();
//        ui->tableView->setModel(model);

        setModel();

        ui->toolBox->setCurrentWidget(ui->page_3);

        on_cansle_clicked();

    }
}

//添加任务界面取消按钮
void MainWindow::on_cansle_clicked()
{
    ui->lineEdit->clear();
    ui->textEdit->clear();
    /*添加时间等清除操作*/
}


void MainWindow::setProgress(double a, double b){
//    ui->progressBar->setRange(0,100);
//    ui->progressBar->setMinimum(0);
//    ui->progressBar->setMaximum(0);

    double percent=b/(a+b);
    ui->progressBar->setValue(percent*100);
}

void MainWindow::connectUSER(){
    system_db=QSqlDatabase::addDatabase("QSQLITE");
    system_db.setDatabaseName("system.db");

    if(!system_db.open()){
        QMessageBox::warning(this,"错误",system_db.lastError().text());
        return;
    }

    QSqlQuery sql(system_db);

    if(sql.exec("create table users(username text not null,password text not null)")){
    sql.exec("insert into users values ('admin','12345')");
    qDebug()<<"insert !";
    }
}

QString MainWindow::m_logincheck()
{

if(QueryUserData_1()){

    appStart();
    return m_login.user;
}
else{
     QMessageBox::warning(&m_login,"错误","账号或密码错误");
     return NULL;
   }
}
QString  MainWindow::m_signcheck(){
if(QueryUserData_2()){
    QSqlQuery sql(system_db);
    sql.prepare("insert into users (username,password) values (:username,:password)");
    sql.bindValue(":username",m_sign.user);
    sql.bindValue(":password",m_sign.pass);
    sql.exec();
    qDebug()<<sql.lastError();
    return m_sign.user;
}
else{
     QMessageBox::warning(&m_login,"错误","用户名已存在！");
     return NULL;
   }
}
bool MainWindow::QueryUserData_2(){//注册检查
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

bool MainWindow::QueryUserData_1()//登录检测
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
                return true;
            qDebug()<<QString("username:%1    password:%2").arg(username).arg(password);
        }
    }
    return false;
}


