#include "startui.h"
#include "ui_startui.h"
#include"mainwindow.h"
#include<QWidget>
startui::startui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::startui)
{
    ui->setupUi(this);
    m_box->setParent(this);
    yesbtn = m_box->addButton("yes", QMessageBox::AcceptRole);
    nobtn = m_box->addButton("no", QMessageBox::RejectRole);

    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    this->setPalette(palette);
//    m_pWidget = new QWidget(this);
//    m_pWidget->setGeometry(0, 0, 300, 100);
//    QPalette pal(m_pWidget->palette());

//    pal.setColor(QPalette::Background, Qt::black); //设置背景黑色
//    m_pWidget->setAutoFillBackground(true);
//    m_pWidget->setPalette(pal);
//    m_pWidget->show();
    //.cpp
        QPalette pa(this->palette());

        QImage img = QImage("../resources/2.JPG");
        img = img.scaled(this->size());


        QBrush *pic = new QBrush(img);

        pa.setBrush(QPalette::Window,*pic);

        //this->setAutoFillBackground(true);
        this->setPalette(pa);

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
        connect(m_box,&QMessageBox::buttonClicked,this,&startui::buttonClicked);
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
