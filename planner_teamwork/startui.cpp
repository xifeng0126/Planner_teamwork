#include "startui.h"
#include "ui_startui.h"

startui::startui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startui)
{
    ui->setupUi(this);
    m_box->setParent(this);
    yesbtn = m_box->addButton("yes", QMessageBox::AcceptRole);
    nobtn = m_box->addButton("no", QMessageBox::RejectRole);
    connect(ui->logIn,&QPushButton::clicked,[=](){
        qDebug()<<"login";
        login_start();
        this->close();
    });
    connect(ui->signUp,&QPushButton::clicked,[=](){
        qDebug()<<"signup";
        sign_start();
        this->close();
    });
    connect(ui->exitOut,&QPushButton::clicked,[=](){
        qDebug()<<"exitOut";
        m_box->setWindowFlags(Qt::Dialog);
        connect(m_box,&QMessageBox::buttonClicked,this,startui::buttonClicked);
        m_box->exec();
    });
}

startui::~startui()
{
    delete ui;
}
void startui::buttonClicked(QAbstractButton *btn){
    if(btn ==(QAbstractButton *) nobtn)
        m_box->close();
    if(btn == (QAbstractButton *)yesbtn)
        this->close();
}
