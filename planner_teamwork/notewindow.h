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
#include"showuser.h"

namespace Ui {
class noteWindow;
}

class noteWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit noteWindow(QWidget *parent = nullptr);
    ~noteWindow();
    void setmodel();//设置tableview
    void showNote(int,bool);//设置我的笔记
    void showCom(int,bool);//设置社区
    void setListModel();//设置listView


    QSqlDatabase db;//数据库
    int UID;//每个用户对应唯一标识
    bool whetherPublic;//笔记是否公开属性
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
    QSqlTableModel *model;//我的笔记表单
    QSqlTableModel *model2;//社区表单

    QStringListModel *smodel;//我的笔记表单
    QStringListModel *smodel2;//社区表单

    textWidget *tWidget;//笔记详情界面
    showUser *user;//创建者界面
};

#endif // NOTEWINDOW_H

