#include "notewindow.h"
#include "ui_notewindow.h"
#include<QString>

noteWindow::noteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::noteWindow)
{
    ui->setupUi(this);
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("system.db");
    n_calendar.setWindowTitle("Calendar");

    db.open();

    ui->stackedWidget_2->setCurrentWidget(ui->page);
    ui->stackedWidget->setCurrentWidget(ui->community);

    QSqlQuery sql(db);
    sql.exec("create table notes(标题,内容,whetherPbulic,UID)");
//    model=new QSqlTableModel(this);
//    model->setTable("notes");
//    model->setFilter(QString("UID='%1'").arg(QString::number(UID)));
//    model->select();
//    ui->tableView->setModel(model);
    setmodel();
}

noteWindow::~noteWindow()
{
    delete ui;
}

void noteWindow::on_tasksButton_clicked()
{
    emit tasks();
}

void noteWindow::on_comButton_clicked()
{
    emit com();
    ui->stackedWidget->setCurrentWidget(ui->community);
}

void noteWindow::on_noteButton_clicked()
{
    emit note();
    ui->stackedWidget->setCurrentWidget(ui->myNote);
    setmodel();
}

void noteWindow::on_addnote_clicked()
{
    emit addNote();
    ui->stackedWidget_2->setCurrentWidget(ui->page_2);
}

void noteWindow::on_save_clicked()
{
    if(!ui->lineEdit->text().isEmpty()&&!ui->textEdit->toPlainText().isEmpty()){
        QSqlQuery sql(db);
        sql.exec(QString("create table notes(标题,内容,whetherPbulic,UID)"));
        sql.exec(QString("insert into notes values('%1','%2','%3','%4')").arg(ui->lineEdit->text()).arg(ui->textEdit->toPlainText()).arg(whetherPublic).arg(UID));

        if(whetherPublic){
            sql.exec(QString("create table community(标题,内容,创作者,UID)"));
            sql.exec(QString("select *from users where UID='%1'").arg(UID));
            sql.next();
            QString person=sql.value(0).toString();
            sql.exec(QString("insert into community values('%1','%2','%3','%4')").arg(ui->lineEdit->text()).arg(ui->textEdit->toPlainText()).arg(person).arg(UID));
        }
        ui->stackedWidget_2->setCurrentWidget(ui->page);
        ui->stackedWidget->setCurrentWidget(ui->myNote);
        ui->lineEdit->clear();
        ui->textEdit->clear();
    }
    setmodel();
}
void noteWindow::on_cancel_clicked()
{
    ui->lineEdit->clear();
    ui->textEdit->clear();
    ui->stackedWidget_2->setCurrentWidget(ui->page);
    ui->stackedWidget->setCurrentWidget(ui->myNote);
}

void noteWindow::setmodel(){
    model=new QSqlTableModel(this);
    model->setTable("notes");
    model->setFilter(QString("UID='%1'").arg(QString::number(UID)));
    model->select();
    ui->tableView->setModel(model);

    model2=new QSqlTableModel(this);
    model2->setTable("community");
    //model2->setFilter("whetherPublic='1'");
    model2->select();
    ui->tableView_2->setModel(model2);
}

void noteWindow::on_radioButton_toggled(bool checked)
{
    if(checked)
    whetherPublic=false;
}

void noteWindow::on_radioButton_2_toggled(bool checked)
{
    if(checked)
    whetherPublic=true;
}



void noteWindow::on_openCalendar_clicked()
{
    n_calendar.show();
}
