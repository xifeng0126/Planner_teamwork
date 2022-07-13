#include "notewindow.h"
#include "ui_notewindow.h"

noteWindow::noteWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::noteWindow)
{
    ui->setupUi(this);
}

noteWindow::~noteWindow()
{
    delete ui;
}

void noteWindow::on_tasksButton_clicked()
{
    emit tasks();
}

void noteWindow::on_comButton_clicked()
{
    emit com();
    ui->stackedWidget->setCurrentWidget(ui->community);
}

void noteWindow::on_noteButton_clicked()
{
    emit note();
    ui->stackedWidget->setCurrentWidget(ui->myNote);
}

void noteWindow::on_tomatoButton_clicked()
{
    tomato();
}

