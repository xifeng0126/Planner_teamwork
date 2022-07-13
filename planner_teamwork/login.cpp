#include "login.h"
#include "ui_login.h"
#include<QDialog>
#include<QMessageBox>
#include<QDebug>

QString login::user = NULL;
QString login::pass = NULL;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    m_box->setParent(this);
    yesbtn = m_box->addButton("yes", QMessageBox::AcceptRole);
    nobtn = m_box->addButton("no", QMessageBox::RejectRole);
    donotRem = true;
    connect(ui->signIn,&QPushButton::clicked,[=](){
        user = ui->userName->text();
        pass = ui->passWord->text();
        if(!ui->passwordSaving->isChecked())
            checkStart();
        if(ui->passwordSaving->isChecked())//这一部分是还未完成底层实现的记住密码功能。
        {
            m_box->setWindowFlags(Qt::Dialog);
            m_box->setText("确定记住密码？");
            connect(m_box,&QMessageBox::buttonClicked,this,&login::buttonClicked);
            m_box->exec();
            if(!donotRem)
                checkStart();
            else
                ui->passwordSaving->setCheckState(Qt::Unchecked);
        }
    });
    connect(ui->exitOut,&QPushButton::clicked,[=](){
        m_box->setWindowFlags(Qt::Dialog);
        m_box->setText("是否确认退出？");
        connect(m_box,&QMessageBox::buttonClicked,this,&login::buttonClicked);
        m_box->exec();
    });
    connect(ui->openSignUp,&QPushButton::clicked,[=](){
        openSignUp();
        this->close();
    });
}
bool login::check(QString username,QString password){

    if(user==username&&pass==password){
        this->close();
        appStart();
        return true;
    }
    else
    return false;
}
void login::buttonClicked(QAbstractButton *btn){
    if(ui->passwordSaving->isChecked())
    {
        if(btn == (QAbstractButton *)yesbtn)
            donotRem = false;
    }
    if(btn ==(QAbstractButton *) nobtn)
        m_box->close();
    if(btn == (QAbstractButton *)yesbtn)
        this->close();
}


login::~login()
{
    delete ui;
}


