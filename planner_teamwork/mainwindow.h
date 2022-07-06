<<<<<<< HEAD
﻿#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include"sql.h"
#include"login.h"
#include"startui.h"
#include"signup.h"
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
    void intitData();
    void setInportance();
    void showText(int);
    QString  m_logincheck();//存在则返回用户名，不存在则报错，并返回NULl
    QString  m_signcheck();
    QString  table_name;
    ~MainWindow();
public slots:
    void on_actiona_triggered();

    void on_actionb_triggered();

    void on_ok_clicked();
    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名
    void on_cansle_clicked();
signals:
    void appStart();

private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlDatabase system_db;//
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
=======
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include"table.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void connectDB();
    void intitData();
    void setInportance();
    void showText(int);

private slots:
    void on_actiona_triggered();

    void on_actionb_triggered();

    void on_ok_clicked();

    void on_cansle_clicked();

protected:
    //void mouseReleaseEvent(QMouseEvent *event) override;
private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
>>>>>>> 3e15dcd1b7cddd2aec379f0b71d80f97f3317d3e
