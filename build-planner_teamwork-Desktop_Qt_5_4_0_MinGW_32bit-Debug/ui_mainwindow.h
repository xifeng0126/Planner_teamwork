/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include "table.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiona;
    QAction *actionb;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *calc;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *task;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    table *tableView;
    QLabel *label_9;
    QProgressBar *progressBar;
    QWidget *page;
    QGridLayout *gridLayout_5;
    table *tableView_2;
    QWidget *page_4;
    QGridLayout *gridLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_4;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_6;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cansle;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(546, 510);
        actiona = new QAction(MainWindow);
        actiona->setObjectName(QStringLiteral("actiona"));
        actionb = new QAction(MainWindow);
        actionb->setObjectName(QStringLiteral("actionb"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        calc = new QWidget();
        calc->setObjectName(QStringLiteral("calc"));
        label_7 = new QLabel(calc);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(220, 20, 54, 31));
        label_8 = new QLabel(calc);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 80, 54, 31));
        stackedWidget->addWidget(calc);
        task = new QWidget();
        task->setObjectName(QStringLiteral("task"));
        gridLayout_4 = new QGridLayout(task);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(task);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        toolBox = new QToolBox(task);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 510, 327));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new table(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 2);

        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        progressBar = new QProgressBar(page_3);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        gridLayout_3->addWidget(progressBar, 1, 1, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("\350\256\241\345\210\222"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 510, 327));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tableView_2 = new table(page);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        gridLayout_5->addWidget(tableView_2, 0, 0, 1, 1);

        toolBox->addItem(page, QString::fromUtf8("\345\267\262\345\256\214\346\210\220"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 510, 327));
        gridLayout_8 = new QGridLayout(page_4);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 1, 1, 1, 2);

        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        dateTimeEdit_2 = new QDateTimeEdit(page_4);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));

        gridLayout->addWidget(dateTimeEdit_2, 3, 2, 1, 1);

        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 2);

        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 2);

        dateTimeEdit = new QDateTimeEdit(page_4);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        gridLayout->addWidget(dateTimeEdit, 2, 2, 1, 1);

        label_2 = new QLabel(page_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 2);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_2->addWidget(label_6);

        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);


        gridLayout_6->addLayout(verticalLayout_2, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ok = new QPushButton(page_4);
        ok->setObjectName(QStringLiteral("ok"));

        horizontalLayout->addWidget(ok);

        horizontalSpacer_3 = new QSpacerItem(29, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        cansle = new QPushButton(page_4);
        cansle->setObjectName(QStringLiteral("cansle"));

        horizontalLayout->addWidget(cansle);


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_8->addLayout(gridLayout_7, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_5, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer, 1, 1, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("\346\267\273\345\212\240"));

        gridLayout_4->addWidget(toolBox, 1, 0, 1, 3);

        stackedWidget->addWidget(task);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 546, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actiona);
        menu->addAction(actionb);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actiona->setText(QApplication::translate("MainWindow", "task", 0));
        actionb->setText(QApplication::translate("MainWindow", "calc", 0));
        label_7->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\241\350\256\260\345\275\225", 0));
        label_8->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\350\277\233\345\272\246\357\274\232", 0));
        label->setText(QApplication::translate("MainWindow", "\345\255\246\344\271\240\344\273\273\345\212\241", 0));
        label_9->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\350\277\233\345\272\246\357\274\232", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\350\256\241\345\210\222", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("MainWindow", "\345\267\262\345\256\214\346\210\220", 0));
        label_3->setText(QApplication::translate("MainWindow", "\344\274\230\345\205\210\347\272\247\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\357\274\232", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\257\246\347\273\206\346\217\217\350\277\260\357\274\232", 0));
        ok->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", 0));
        cansle->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("MainWindow", "\346\267\273\345\212\240", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
