#ifndef NOTEWINDOW_H
#define NOTEWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QSqlTableModel>
#include<textwidget.h>
#include<table.h>
#include<QStringListModel>
#include"list.h"

namespace Ui {
class noteWindow;
}

class noteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit noteWindow(QWidget *parent = nullptr);
    ~noteWindow();
    void setmodel();
    void showNote(int,bool);
    void showCom(int,bool);
    void setListModel();


    QSqlDatabase db;
    int UID;
    bool whetherPublic;
private slots:
    void on_tasksButton_clicked();

    void on_comButton_clicked();

    void on_noteButton_clicked();

    void on_addnote_clicked();


    void on_save_clicked();

    void on_radioButton_toggled(bool checked);

    void on_radioButton_2_toggled(bool checked);

    void on_cancel_clicked();

    void on_tomatoButton_clicked();

    //void on_pushButton_clicked();

signals:
    void tasks();
    void com();
    void note();
    void addNote();
    void showMore();
    void tomato();

protected:
    //void mouseReleaseEvent(QMouseEvent *event) override;



private:
    Ui::noteWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *model2;

    QStringListModel *smodel;
    QStringListModel *smodel2;

    textWidget *tWidget;
};

#endif // NOTEWINDOW_H

