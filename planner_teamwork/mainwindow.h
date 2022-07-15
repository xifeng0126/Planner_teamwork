#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
#include<QtCharts/QChart>
#include"config.h"
#include"table.h"
#include"textwidget.h"
#include"login.h"
#include"startui.h"
#include"signup.h"
#include"notewindow.h"
#include"calendarwidget.h"
#include"moreui.h"
#include"window.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts>
#include<QStringListModel>
#include<QListView>

QT_CHARTS_USE_NAMESPACE

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
    moreUI m_moreUI;
    noteWindow noteW;
    Window m_window;
    void connectDB();//打开数据库
    void connectUSER();
    void intitData();//设置优先级下拉菜单
    void setInportance();//创建优先级表单
    void wetherComplete(int,bool);//学习任务界面左键任务显示是否完成
    void completed(int,bool);//学习任务完成界面左键任务显示是否完成
    void setModel();//设置tableView
    void setListModel();//设置listView
    void Sleep(int msec);

    void setProgress(double,double);//设置进度条
    //void closeButton();
    void createpieSewies(double,double);

    QString  m_logincheck();//存在则返回用户名，不存在则报错，并返回NULl
    QString  m_signcheck();//存在报错返回NULL,不存在则注册
    QString  user_name;

    int UID;//每个用户对应唯一标识

    //int this_UID;

private slots:
    void on_actiona_triggered();

    void on_actionb_triggered();

    void on_actioncalendar_triggered();

    void on_ok_clicked();

    void on_cansle_clicked();

    bool QueryUserData_1();//遍历用户名及密码
    bool QueryUserData_2();//只遍历用户名

    //static int UID;

    //void on_actiontest_triggered();

protected:
    //void mouseReleaseEvent(QMouseEvent *event) override;
signals:
    void appStart();
private:

    Ui::MainWindow *ui;
    QSqlTableModel *model;//未完成任务表单
    QSqlTableModel *model2;//已完成任务表单
    //QSqlTableModel *model3;

    QStringListModel *smodel;//未完成任务表单
    QStringListModel *smodel2;//已完成任务表单

    textWidget *tWidget;//任务详情界面

    double WaitComplete=0;//记录未完成任务
    double Completed=0;//记录完成任务

    QSqlDatabase system_db;//用户名，密码数据库

    bool flag =true;

    //bool Delete_is_clicked=false;
};

#endif // MAINWINDOW_H

