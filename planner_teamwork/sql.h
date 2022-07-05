#ifndef SQL_H
#define SQL_H
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QDebug>
#include<QMap>
class sql
{
public:
    QSqlDatabase db;
    sql();
    ~sql();
    void CreatDb();
    bool OpenDb();
    void CloseDb();
    void CreateTable(QString creat_sql =
            "create table tasks (id integer primary key autoincrement,m_priority varchar(1), theme varchar(10), description varchar(50),time_start text,time_duration int)");
    void InsertData(QString insert_sql);
    void UpdateData(QString update_sql);
    void QueryAllData(QString select_all_sql);
   // enum priority {S,A,B,C,D,E};//不太行，弃用
};

#endif // SQL_H
