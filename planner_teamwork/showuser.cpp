#include "showuser.h"
#include "ui_showuser.h"

showUser::showUser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::showUser)
{
    ui->setupUi(this);
}

showUser::~showUser()
{
    delete ui;
}

void showUser::setName(QString s){
    ui->label_2->setText(s);
}
