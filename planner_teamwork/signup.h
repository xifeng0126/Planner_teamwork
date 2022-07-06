#ifndef SIGNUP_H
#define SIGNUP_H

#include<QWidget>
#include<QDialog>
#include<QMessageBox>
#include<QPushButton>
#include<QAbstractButton>

namespace Ui {
class signup;
}

class signup : public QWidget
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = 0);
    static QString user,pass;
    QPushButton* yesbtn;
    QPushButton* nobtn;
    QMessageBox * m_box = new QMessageBox(QMessageBox::Question,"确认","是否确认退出");
    static bool check(QString);//注册时查询账户名是否已存在
    ~signup();
signals:
    void checkStart();
    void appStart();
public slots:
    void buttonClicked(QAbstractButton *btn);

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
