﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include"sql.h"
#include"login.h"
#include"startui.h"
#include"signup.h"
#include"table.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    sql* m_sql;
    startui m_start;
    signup m_sign;
    login m_login;
    void connectDB();
    void connectUSER();
    void intitData();
    void setInportance();
    void wetherComplit(int);
    void complited(int);
    void setModel();
    QString  m_logincheck();//存在则返回用户名，不存在则报错，并返回NULl
    QString  m_signcheck();//存在报错返回NULL,不存在则
    QString  user_name;
    ~MainWindow();
public slots:
    void on_actiona_triggered();
    void on_actionb_triggered();
    void on_cansle_clicked();
    void on_ok_clicked();
    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名
signals:
    void appStart();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *model2;
    QSqlDatabase system_db;//用户名，密码数据库
    QSqlDatabase db;
};

#endif // MAINWINDOW_H


