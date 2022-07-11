#ifndef CWINDOW_H
#define CWINDOW_H

#include <QWidget>
#include "calendarwidget.h"
#include <QCalendarWidget>
#include <QList>
#include <QDebug>

namespace Ui {
class CWindow;
}

class CWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CWindow(QWidget *parent = nullptr);
    ~CWindow();

private:
    Ui::CWindow *ui;
    bool showCalendar;
    CalendarWidget *calendar;
    QList<QString> date;
};

#endif // CWINDOW_H
