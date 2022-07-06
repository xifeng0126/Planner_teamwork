#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlTableModel>
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
    login m_log;
    startui m_start;
    signup m_sign;
    void connectDB();
    void intitData();
    ~MainWindow();
public slots:
    void on_actiona_triggered();

    void on_actionb_triggered();

    void on_ok_clicked();

    void on_cansle_clicked();


private:
    Ui::MainWindow *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
};

#endif // MAINWINDOW_H
