#include "login.h"
#include "ui_login.h"
#include<QDialog>
#include<QMessageBox>

login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    m_box->setParent(this);
    yesbtn = m_box->addButton("yes", QMessageBox::AcceptRole);
     nobtn = m_box->addButton("no", QMessageBox::RejectRole);
    connect(ui->signIn,&QPushButton::clicked,[=](){
        QString user = ui->userName->text();
        QString pass = ui->passWord->text();
        check(user,pass);
    });
    connect(ui->exitOut,&QPushButton::clicked,[=](){
        m_box->setWindowFlags(Qt::Dialog);
        connect(m_box,&QMessageBox::buttonClicked,this,login::buttonClicked);
        m_box->exec();
    });
}
void login::check(QString userName,QString passWord){
    if(userName=="user"&&passWord=="passwod"){
        login::close();
        appStart();
    }
    else
    QMessageBox::warning(this,"错误","用户名或密码错误");
}
void login::buttonClicked(QAbstractButton *btn){
    if(btn ==(QAbstractButton *) nobtn)
        m_box->close();
    if(btn == (QAbstractButton *)yesbtn)
        this->close();
}


login::~login()
{
    delete ui;
}
