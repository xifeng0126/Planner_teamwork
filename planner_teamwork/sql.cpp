#include "sql.h"

sql::sql()
{

}

sql::~sql()
{

}

void sql::CreatDb()
{
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    {
        db = QSqlDatabase::database("qt_sql_default_connection");
    }
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("mydatabase.db");

    }
}
bool sql::OpenDb()
{
    if(!db.open())
    {
        qDebug() << "Error: Failed to connect database." << db.lastError();
        return false;
    }

    return true;
}

void sql::CloseDb()
{
    db.close();
}

void sql::CreateTable(QString creat_sql)
{
    QSqlQuery sql_query;
    //sql_query.prepare(creat_sql);
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
    QSqlQuery sql_query;
    //sql_query.prepare(insert_sql);
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
    QSqlQuery sql_query;
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


void sql::QueryAllData(QString select_all_sql)//遍历查询
{
    QSqlQuery sql_query;
    sql_query.prepare(select_all_sql);
    if(!sql_query.exec())
    {
        qDebug()<<sql_query.lastError();
    }
    else
    {
        while(sql_query.next())
        {
            int id = sql_query.value(0).toInt();
            QString theme = sql_query.value(2).toString();
            QString description = sql_query.value(3).toString();
            qDebug()<<QString("id:%1    theme:%2    des:%3").arg(id).arg(theme).arg(description);
        }
    }
}


