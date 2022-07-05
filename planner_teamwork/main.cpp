#include "mainwindow.h"
#include <QApplication>
#include"sql.h"
#include<QDateTime>


int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    //w.show();

    return a.exec();
//    sql* m_sql = new sql();
//    m_sql->CreatDb();
//    m_sql->OpenDb();
//    //m_sql->CreateTable();
//    //m_sql->CreateTable("create table users (id integer primary key autoincrement,name varchar(20),password varchar(20))");
//    m_sql->InsertData("insert into tasks values('S','study','some study plans','2022-7-4 22:40:00',12)");
//    //必须提供6个参数的话，那自动增长有啥用？
//    m_sql->UpdateData("update tasks set theme = 'play' where id = 1  ");
//    return 0;
}
