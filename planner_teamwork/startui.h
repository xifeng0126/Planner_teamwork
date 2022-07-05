#ifndef STARTUI_H
#define STARTUI_H

#include <QWidget>
#include<QDialog>
#include<QMessageBox>
#include<QPushButton>
#include<QAbstractButton>
#include<QDebug>
namespace Ui {
class startui;
}

class startui : public QWidget
{
    Q_OBJECT

public:
    explicit startui(QWidget *parent = 0);
    QPushButton* yesbtn;
    QPushButton* nobtn;
    QMessageBox * m_box = new QMessageBox(QMessageBox::Question,"确认","是否确认退出");
    void buttonClicked(QAbstractButton *btn);
    ~startui();
signals:
    void login_start();
    void sign_start();

private:
    Ui::startui *ui;
};

#endif // STARTUI_H
