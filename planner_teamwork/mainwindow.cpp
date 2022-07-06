#include "mainwindow.h"
#include "ui_mainwindow.h"
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

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    model=new QSqlTableModel(this);
//    model->setTable("tasks");
//    ui->tableView->setModel(model);
//    model->select();

    this->setMinimumSize(1000,600);
    on_actiona_triggered();

    connectDB();//打开数据库

    intitData();//设置重要性下拉菜单

    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    connect(ui->tableView,&table::releaseSign,this,&MainWindow::wetherComplit);  //设置右键点击显示对话框
    connect(ui->tableView_2,&table::releaseSign,this,&MainWindow::complited);    //同上
}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}

void MainWindow::wetherComplit(int i){  //未完成界面对话框，确定时将第i行的complit值改成yes

//    QWidget *dlg=new QWidget(this);
//    //dlg->setAttribute(Qt::WA_DeleteOnClose);
//    dlg->setMinimumSize(500,500);
//    QLabel lable(dlg);
//    lable.setText("hello");
//    lable.show();

//    QTextEdit edit(dlg);
//    dlg->show();
//    //qDebug()<<i<<i;

//    QSqlTableModel *model3=new QSqlTableModel(this);
//    model3->setTable("tasks");


    int a=QMessageBox::question(this,"完成","是否完成此项？",
                                QMessageBox::Yes,QMessageBox::No);
    if(a==QMessageBox::Yes){
        QSqlRecord record = model->record(i);
        record.setValue("complit","yes");
        model->setRecord(i,record);

        model->database().transaction();
        model->submitAll();
        //qDebug()<<i;
        //connectDB();
        model->database().commit();
        setModel();
    }
}


//完成界面对话框，确定时将第i行的complit值改成no
void MainWindow::complited(int i){
    int a=QMessageBox::question(this,"未完成","此项还未完成？",
                                QMessageBox::Yes,QMessageBox::No);
    if(a==QMessageBox::Yes){
        QSqlRecord record = model2->record(i);
        record.setValue("complit","no");
        model2->setRecord(i,record);
        model2->database().transaction();
        model2->submitAll();
        model2->database().commit();
        setModel();
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
    sql.exec("create table tasks(任务,重要性,开始时间,结束时间,详情,complit)");
    setModel();
}


//将数据库显示到tableView中
void MainWindow::setModel(){
    model=new QSqlTableModel(this);
    model2=new QSqlTableModel(this);
    model->setTable("tasks");
    model2->setTable("tasks");

//    model->removeColumn(5);
//    model2->removeColumn(5);


    model->setFilter("complit='no'");
    model->select();
    ui->tableView->setModel(model);


    model2->setFilter("complit='yes'");
    model2->select();
    ui->tableView_2->setModel(model2);
}

void MainWindow::setInportance(){    //设置重要性表单
    QSqlQuery sql(db);
    sql.exec("create table inportance(inportance)");
    sql.exec("insert into inportance values (\"A\")");
    sql.exec("insert into inportance values (\"B\")");
    sql.exec("insert into inportance values (\"C\")");
    sql.exec("insert into inportance values (\"D\")");
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
        sql.exec("create table tasks(任务,重要性,开始时间,结束时间,详情,complit)");
        sql.exec(QString("insert into tasks values('%1','%2','%3','%4','%5',\"no\")")
                 .arg(ui->lineEdit->text()).arg(ui->comboBox->currentText()).arg(ui->dateTimeEdit->dateTime().toString()).arg(ui->dateTimeEdit_2->dateTime().toString()).arg(ui->textEdit->toPlainText()));

//        model=new QSqlTableModel(this);
//        model->setTable("tasks");

//        //model->removeColumn(3);

//        model->setFilter("complit='no'");
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

//void MainWindow::mouseReleaseEvent(QMouseEvent *event){
//    int curRow = ui->tableView->currentIndex().row();
//    qDebug()<<curRow;
//}
