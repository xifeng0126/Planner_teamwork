#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(&m_start,&startui::login_start,[=](){//测试初始登录界面
        m_log.show();
    });
    connect(&m_start,&startui::sign_start,[=](){
        m_sign.show();
    });
    m_start.show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
