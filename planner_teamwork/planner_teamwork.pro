#-------------------------------------------------
#
# Project created by QtCreator 2022-07-04T21:20:27
#
#-------------------------------------------------

QT       += core gui\
             sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = planner_teamwork
TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
        mainwindow.cpp \
    sql.cpp \
    login.cpp \
    startui.cpp \
    signup.cpp

HEADERS  += mainwindow.h \
    sql.h \
    login.h \
    startui.h \
    signup.h

FORMS    += mainwindow.ui \
    login.ui \
    startui.ui \
    signup.ui

