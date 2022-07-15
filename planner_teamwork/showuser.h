#ifndef SHOWUSER_H
#define SHOWUSER_H

#include <QWidget>
#include<QString>

namespace Ui {
class showUser;
}

class showUser : public QWidget
{
    Q_OBJECT

public:
    explicit showUser(QWidget *parent = nullptr);//显示社区中笔记创建者
    ~showUser();
    void setName(QString);

private:
    Ui::showUser *ui;
};

#endif // SHOWUSER_H
