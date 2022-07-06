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
        m_log.show();
    });
    connect(&m_start,&startui::sign_start,[=](){
        m_sign.show();
    });
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
