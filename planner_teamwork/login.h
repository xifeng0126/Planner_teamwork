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
    explicit login(QWidget *parent = 0);
    QPushButton* yesbtn;
    QPushButton* nobtn;
    QMessageBox * m_box = new QMessageBox(QMessageBox::Question,"确认","是否确认退出");
    ~login();
signals:
    void appStart();
public slots:
    void check(QString,QString);//查询账户，待完善
    void buttonClicked(QAbstractButton *btn);


private:
    Ui::login *ui;
};
#endif // login_H
