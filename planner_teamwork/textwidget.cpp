#include "textwidget.h"
#include "ui_textwidget.h"

textWidget::textWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::textWidget)
{
    ui->setupUi(this);
    //connect(ui->pushButton,&QPushButton::clicked,this,&textWidget::send);
}

textWidget::~textWidget()
{
    delete ui;
}

void textWidget::setText(QString s){
    ui->textBrowser->setText(s);
}

//void textWidget::send()
//{
//    emit buttonSign();
//}

//void textWidget::setButtonNum(int i){
//    ui->pushButton->num=i;
//}


//void textWidget::on_pushButton_clicked()
//{

//}
