/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "list.h"
#include "qchartview.h"
#include "table.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiona;
    QAction *actionb;
    QAction *actioncalendar;
    QAction *actiontest;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *calc;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout;
    QChartView *graphicsView;
    QChartView *graphicsView_2;
    QWidget *page_2;
    QGridLayout *gridLayout_10;
    table *tableView;
    table *tableView_2;
    QWidget *task;
    QGridLayout *gridLayout_4;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QProgressBar *progressBar;
    QLabel *label_9;
    list *listView;
    QWidget *page;
    QGridLayout *gridLayout_5;
    list *listView_2;
    QWidget *page_4;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cansle;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 800);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/apple.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actiona = new QAction(MainWindow);
        actiona->setObjectName(QString::fromUtf8("actiona"));
        actionb = new QAction(MainWindow);
        actionb->setObjectName(QString::fromUtf8("actionb"));
        actioncalendar = new QAction(MainWindow);
        actioncalendar->setObjectName(QString::fromUtf8("actioncalendar"));
        actiontest = new QAction(MainWindow);
        actiontest->setObjectName(QString::fromUtf8("actiontest"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        calc = new QWidget();
        calc->setObjectName(QString::fromUtf8("calc"));
        gridLayout_9 = new QGridLayout(calc);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QChartView(calc);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        verticalLayout->addWidget(graphicsView);

        graphicsView_2 = new QChartView(calc);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));
        graphicsView_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        verticalLayout->addWidget(graphicsView_2);


        gridLayout_9->addLayout(verticalLayout, 0, 0, 1, 1);

        stackedWidget->addWidget(calc);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_10 = new QGridLayout(page_2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        tableView = new table(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout_10->addWidget(tableView, 0, 0, 1, 1);

        tableView_2 = new table(page_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout_10->addWidget(tableView_2, 1, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        task = new QWidget();
        task->setObjectName(QString::fromUtf8("task"));
        gridLayout_4 = new QGridLayout(task);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        toolBox = new QToolBox(task);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 564, 587));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        progressBar = new QProgressBar(page_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        progressBar->setValue(24);

        gridLayout_3->addWidget(progressBar, 1, 1, 1, 1);

        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        listView = new list(page_3);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout_3->addWidget(listView, 0, 0, 1, 2);

        toolBox->addItem(page_3, QString::fromUtf8("\350\256\241\345\210\222"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 564, 587));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        listView_2 = new list(page);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout_5->addWidget(listView_2, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\267\262\345\256\214\346\210\220"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 564, 587));
        gridLayout_8 = new QGridLayout(page_4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        dateTimeEdit_2 = new QDateTimeEdit(page_4);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout->addWidget(dateTimeEdit_2, 3, 2, 1, 1);

        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);

        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 2);

        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(page_4);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout->addWidget(dateTimeEdit, 2, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        verticalLayout_2->addWidget(textEdit);


        gridLayout_6->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ok = new QPushButton(page_4);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/37CF57182DDEB6469851836D20F00638.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok->setIcon(icon1);
        ok->setIconSize(QSize(70, 16));

        horizontalLayout->addWidget(ok);

        horizontalSpacer_3 = new QSpacerItem(29, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        cansle = new QPushButton(page_4);
        cansle->setObjectName(QString::fromUtf8("cansle"));
        cansle->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/EC5CB6F3435B6BC9B80A3D2CBC3993B4.png"), QSize(), QIcon::Normal, QIcon::Off);
        cansle->setIcon(icon2);
        cansle->setIconSize(QSize(70, 16));

        horizontalLayout->addWidget(cansle);


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 1, 1, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("\346\267\273\345\212\240"));

        gridLayout_4->addWidget(toolBox, 2, 0, 1, 4);

        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label = new QLabel(task);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\232\266\344\271\246\";"));

        gridLayout_4->addWidget(label, 0, 2, 1, 1);

        stackedWidget->addWidget(task);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actiona);
        menu->addAction(actionb);
        menu->addAction(actioncalendar);
        menu->addSeparator();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Planner", nullptr));
        actiona->setText(QCoreApplication::translate("MainWindow", "task", nullptr));
        actionb->setText(QCoreApplication::translate("MainWindow", "calc", nullptr));
        actioncalendar->setText(QCoreApplication::translate("MainWindow", "calendar", nullptr));
        actiontest->setText(QCoreApplication::translate("MainWindow", "test", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\350\277\233\345\272\246\357\274\232", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\350\256\241\345\210\222", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\257\246\347\273\206\346\217\217\350\277\260\357\274\232", nullptr));
        ok->setText(QString());
        cansle->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\344\271\240\344\273\273\345\212\241", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
