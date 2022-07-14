#include "moreui.h"
#include "ui_moreui.h"

moreUI::moreUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::moreUI)
{
    ui->setupUi(this);

    QPalette pa(this->palette());

    QImage img = QImage("../resources/nbg.PNG");
    img = img.scaled(this->size());


    QBrush *pic = new QBrush(img);

    pa.setBrush(QPalette::Window,*pic);

    //this->setAutoFillBackground(true);
    this->setPalette(pa);
    ui->web->setOpenExternalLinks(true);//设置为true才能打开网页
    ui->web->setText("<a style='color: green; font-size:20px;text-decoration: none' href = https://xifeng0126.github.io>进入网页版");
    ui->web->setAlignment(Qt::AlignCenter);
}

moreUI::~moreUI()
{
    delete ui;
}
