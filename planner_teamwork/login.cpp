#include "login.h"
#include "ui_login.h"
#include<QDialog>
#include<QMessageBox>

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
    connect(ui->signIn,&QPushButton::clicked,[=](){
        user = ui->userName->text();
        pass = ui->passWord->text();
        checkStart();
    });
    connect(ui->exitOut,&QPushButton::clicked,[=](){
        m_box->setWindowFlags(Qt::Dialog);
        connect(m_box,&QMessageBox::buttonClicked,this,login::buttonClicked);
        m_box->exec();
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
    if(btn ==(QAbstractButton *) nobtn)
        m_box->close();
    if(btn == (QAbstractButton *)yesbtn)
        this->close();
}


login::~login()
{
    delete ui;
}

