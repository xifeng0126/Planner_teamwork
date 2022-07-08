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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qchartview.h"
#include "qcustomplot.h"
#include "table.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiona;
    QAction *actionb;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_6;
    QStackedWidget *stackedWidget;
    QWidget *calc;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QCustomPlot *graphicsView_2;
    QChartView *graphicsView;
    QChartView *graphicsView_3;
    QWidget *task;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    table *tableView;
    QWidget *page;
    QGridLayout *gridLayout_5;
    table *tableView_2;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextEdit *textEdit;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ok;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *cansle;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QDateTimeEdit *dateTimeEdit_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(686, 575);
        actiona = new QAction(MainWindow);
        actiona->setObjectName(QString::fromUtf8("actiona"));
        actionb = new QAction(MainWindow);
        actionb->setObjectName(QString::fromUtf8("actionb"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        calc = new QWidget();
        calc->setObjectName(QString::fromUtf8("calc"));
        calc->setLayoutDirection(Qt::LeftToRight);
        calc->setAutoFillBackground(true);
        gridLayoutWidget_2 = new QWidget(calc);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(-10, 0, 691, 521));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        graphicsView_2 = new QCustomPlot(gridLayoutWidget_2);
        graphicsView_2->setObjectName(QString::fromUtf8("graphicsView_2"));

        horizontalLayout_6->addWidget(graphicsView_2);

        graphicsView = new QChartView(gridLayoutWidget_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        horizontalLayout_6->addWidget(graphicsView);


        gridLayout_8->addLayout(horizontalLayout_6, 0, 0, 1, 1);

        graphicsView_3 = new QChartView(gridLayoutWidget_2);
        graphicsView_3->setObjectName(QString::fromUtf8("graphicsView_3"));
        graphicsView_3->setLayoutDirection(Qt::LeftToRight);

        gridLayout_8->addWidget(graphicsView_3, 1, 0, 1, 1);

        stackedWidget->addWidget(calc);
        task = new QWidget();
        task->setObjectName(QString::fromUtf8("task"));
        gridLayout_2 = new QGridLayout(task);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(task);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        toolBox = new QToolBox(task);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 597, 396));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView = new table(page_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("\350\256\241\345\210\222"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 597, 396));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableView_2 = new table(page);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_5->addWidget(tableView_2, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\267\262\345\256\214\346\210\220"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 597, 396));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);


        gridLayout_4->addLayout(verticalLayout, 0, 2, 5, 3);

        horizontalSpacer_5 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 7, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateTimeEdit_2 = new QDateTimeEdit(page_4);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));

        horizontalLayout_4->addWidget(dateTimeEdit_2);


        gridLayout_4->addLayout(horizontalLayout_4, 4, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 7, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        dateTimeEdit = new QDateTimeEdit(page_4);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));

        horizontalLayout_3->addWidget(dateTimeEdit);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(114, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 7, 0, 1, 1);

        ok = new QPushButton(page_4);
        ok->setObjectName(QString::fromUtf8("ok"));

        gridLayout_4->addWidget(ok, 7, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        cansle = new QPushButton(page_4);
        cansle->setObjectName(QString::fromUtf8("cansle"));

        gridLayout_4->addWidget(cansle, 7, 3, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        dateTimeEdit_3 = new QDateTimeEdit(page_4);
        dateTimeEdit_3->setObjectName(QString::fromUtf8("dateTimeEdit_3"));

        horizontalLayout_5->addWidget(dateTimeEdit_3);


        gridLayout_4->addLayout(horizontalLayout_5, 3, 0, 1, 2);

        toolBox->addItem(page_4, QString::fromUtf8("\346\267\273\345\212\240"));

        gridLayout_2->addWidget(toolBox, 1, 0, 1, 3);

        stackedWidget->addWidget(task);

        gridLayout_6->addWidget(stackedWidget, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_6, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 686, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionb);
        menu->addAction(actiona);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actiona->setText(QCoreApplication::translate("MainWindow", "task", nullptr));
        actionb->setText(QCoreApplication::translate("MainWindow", "calc", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\344\271\240\344\273\273\345\212\241", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\350\256\241\345\210\222", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\350\257\246\347\273\206\346\217\217\350\277\260\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\273\273\345\212\241\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", nullptr));
        ok->setText(QCoreApplication::translate("MainWindow", "\347\241\256\350\256\244", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\351\207\215\350\246\201\346\200\247\357\274\232", nullptr));
        cansle->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\217\220\351\206\222\346\227\266\351\227\264\357\274\232", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
