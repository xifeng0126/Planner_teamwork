#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>
#include<QString>
#include<QPushButton>

namespace Ui {
class textWidget;
}

class textWidget : public QWidget
{
    Q_OBJECT

public:
    explicit textWidget(QWidget *parent = nullptr);
    ~textWidget();

    void setText(QString);//显示任务或笔记详情
    void setButtonNum(int);
    //void sendSign(int);
    //void send();

private:
    Ui::textWidget *ui;
signals:
    void deletSign();

private slots:
    //void on_pushButton_clicked();
    void on_pushButton_clicked();
};

#endif // TEXTWIDGET_H

