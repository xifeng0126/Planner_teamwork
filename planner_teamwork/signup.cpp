#include "signup.h"
#include "ui_signup.h"
#include<QDialog>
#include<QMessageBox>

QString signup::user = NULL;
QString signup::pass = NULL;
signup::signup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    m_box->setParent(this);

    QPalette pa(this->palette());

    QImage img = QImage("../resources/4.png");
    img = img.scaled(this->size());


    QBrush *pic = new QBrush(img);

    pa.setBrush(QPalette::Window,*pic);

    //this->setAutoFillBackground(true);
    this->setPalette(pa);

    yesbtn = m_box->addButton("yes", QMessageBox::AcceptRole);
     nobtn = m_box->addButton("no", QMessageBox::RejectRole);
    connect(ui->signIn,&QPushButton::clicked,[=](){
    user = ui->userName->text();
    pass = ui->passWord->text();
    if(user!=NULL&&pass!=NULL){       
        checkStart();
    }

    });
    connect(ui->exitOut,&QPushButton::clicked,[=](){
        m_box->setWindowFlags(Qt::Dialog);
        connect(m_box,&QMessageBox::buttonClicked,this,&signup::buttonClicked);
        m_box->exec();
    });
    connect(ui->openLogIn,&QPushButton::clicked,[=](){
        openLogIn();
        this->close();
    });
}
bool signup::check(QString username){

    if(user!=username){
        return true;
    }
    else
    return false;
}
void signup::buttonClicked(QAbstractButton *btn){
    if(btn ==(QAbstractButton *) nobtn)
        m_box->close();
    if(btn == (QAbstractButton *)yesbtn)
        this->close();
}


signup::~signup()
{
    delete ui;
}


