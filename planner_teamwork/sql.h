<<<<<<< Updated upstream
#ifndef SQL_H
#define SQL_H
#include<QSqlDatabase>
#include<QSqlError>
#include<QSqlQuery>
#include<QDebug>


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
    enum priority {S,A,B,C,D,E};//枚举表示优先级，越小优先级越高,但是sql语句好像不能用枚举类型？
};

#endif // SQL_H
=======
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
    sql(QSqlDatabase db);
    ~sql();
    QSqlQuery sql_query;
    void CreatDb(QString db_name);
    bool OpenDb(QSqlDatabase db);
    void CloseDb(QSqlDatabase db);
    void CreateTable(QString creat_sql =
            "create table tasks (id integer primary key autoincrement,m_priority varchar(1), theme varchar(10), description varchar(50),time_start text,time_duration int)");
    void InsertData(QString insert_sql);
    void UpdateData(QString update_sql);
    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名
    QSqlDatabase db;
};

#endif // SQL_H

>>>>>>> Stashed changes
