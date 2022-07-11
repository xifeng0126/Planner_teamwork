#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include<QtCharts/QChart>
#include"table.h"
#include"textwidget.h"
#include"login.h"
#include"startui.h"
#include"signup.h"
#include"notewindow.h"
#include"calendarwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    startui m_start;
    signup m_sign;
    login m_login;
    CalendarWidget m_calendar;
    void connectDB();
    void connectUSER();
    void intitData();
    void setInportance();
    void wetherComplete(int,bool);
    void completed(int,bool);
    void setModel();
    void setProgress(double,double);
    //void closeButton();
    void createpieSewies();

    QString  m_logincheck();//存在则返回用户名，不存在则报错，并返回NULl
    QString  m_signcheck();//存在报错返回NULL,不存在则注册
    QString  user_name;

    int UID;

    int this_UID;

private slots:
    void on_actiona_triggered();

    void on_actionb_triggered();

    void on_actioncalendar_triggered();

    void on_ok_clicked();

    void on_cansle_clicked();

    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名

    //static int UID;

protected:
    //void mouseReleaseEvent(QMouseEvent *event) override;
signals:
    void appStart();
private:

    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *model2;
    //QSqlTableModel *model3;
    QSqlDatabase db;
    QSqlDatabase dbPublic;

    textWidget *tWidget;

    double WaitComplete=0;
    double Completed=0;

    QSqlDatabase system_db;//用户名，密码数据库

    bool flag =true;

    noteWindow noteW;

    //bool Delete_is_clicked=false;
};

#endif // MAINWINDOW_H
