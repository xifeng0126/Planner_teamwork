
﻿#include "sql.h"
#include "login.h"
#include "signup.h"

sql::sql(QSqlDatabase db)
{

    db = QSqlDatabase::addDatabase("QSQLITE");
}

sql::~sql()
{

}

void sql::CreatDb(QString db_name)
{
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(db_name);

    }
}
bool sql::OpenDb(QSqlDatabase db)
{
    if(!db.open())
    {
        qDebug() << "Error: Failed to connect database." << db.lastError();
        return false;
    }

    return true;
}

void sql::CloseDb(QSqlDatabase db)
{
    db.close();
}

void sql::CreateTable(QString creat_sql)
{
    if(!sql_query.exec(creat_sql))
    {
        qDebug() << "Error: Fail to create table." << sql_query.lastError();
    }
    else
    {
        qDebug() << "Table created!";
    }
}

void sql::InsertData(QString insert_sql)
{
    if(!sql_query.exec(insert_sql))
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        qDebug() << "Data inserted!";
    }

}

void sql::UpdateData(QString update_sql)
{
    sql_query.prepare(update_sql);
    if(!sql_query.exec())
    {
        qDebug() << sql_query.lastError();
    }
    else
    {
        qDebug() << "updated!";
    }
}


//bool sql::QueryUserData_1()//遍历查询
//{
//    if(!sql_query.exec("select username,password from system_db"))
//    {
//        qDebug()<<sql_query.lastError();
//    }
//    else
//    {
//        while(sql_query.next())
//        {
//            QString username = sql_query.value(0).toString();
//            QString password = sql_query.value(1).toString();
//            if(login::c)
//                return true;
//            qDebug()<<QString("username:%1    password:%2").arg(username).arg(password);
//        }
//    }
//    return false;
//}
//bool sql::QueryUserData_2(){
//    if(!sql_query.exec("select username from system_db"))
//    {
//        qDebug()<<sql_query.lastError();
//    }
//    else
//    {
//        while(sql_query.next())
//        {
//            QString username = sql_query.value(0).toString();
//            if(signup::check(username)){
//                continue;
//            qDebug()<<QString("username:%1).arg(username)");
//            }
//            else
//                return false;
//        }
//        return true;
//    }
//}


