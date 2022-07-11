#-------------------------------------------------
#
# Project created by QtCreator 2022-07-04T21:20:27
#
#-------------------------------------------------

QT       += core gui\
             sql\
            charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport


TARGET = planner_teamwork
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
    calendarwidget.cpp \
    cwindow.cpp \
        mainwindow.cpp \
    login.cpp \
    startui.cpp \
    signup.cpp \
    table.cpp \
    qcustomplot.cpp\
    textwidget.cpp\
    notewindow.cpp


HEADERS  += mainwindow.h \
    calendarwidget.h \
    cwindow.h \
    login.h \
    startui.h \
    signup.h \
    table.h \
    qcustomplot.h\
    textwidget.h\
    notewindow.h


FORMS    += mainwindow.ui \
    cwindow.ui \
    login.ui \
    startui.ui \
    signup.ui \
    textwidget.ui\
    notewindow.ui

