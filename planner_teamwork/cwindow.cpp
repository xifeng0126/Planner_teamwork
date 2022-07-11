#include "cwindow.h"
#include "ui_cwindow.h"
#include <QFile>
#include <QTextStream>
#include <time.h>

CWindow::CWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWindow)
{
    ui->setupUi(this);
    showCalendar = false;
    calendar = new CalendarWidget(this);
    ui->verticalLayout->addWidget(calendar);

}

CWindow::~CWindow()
{
    delete ui;
}

