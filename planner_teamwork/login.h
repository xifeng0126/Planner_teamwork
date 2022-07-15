#ifndef login_H
#define login_H

#include<QWidget>
#include<QDialog>
#include<QMessageBox>
#include<QPushButton>
#include<QAbstractButton>
namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    static QString user,pass;
    explicit login(QWidget *parent = 0);
    QPushButton* yesbtn;
    QPushButton* nobtn;
    QMessageBox * m_box = new QMessageBox(QMessageBox::Question,"确认","是否确认退出");
    bool donotRem;
    ~login();
signals:
    void checkStart();//发出检测开始信号
    void appStart();//发出进入应用信号
    void openSignUp();//切换至注册信号
public slots:
    bool check(QString,QString);//查询账户
    void buttonClicked(QAbstractButton *btn);


private:
    Ui::login *ui;
};
#endif // login_H

