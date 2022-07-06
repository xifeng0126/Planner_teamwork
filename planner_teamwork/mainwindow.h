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
