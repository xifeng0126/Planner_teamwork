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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiona;
    QAction *actionb;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *calc;
    QWidget *task;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QTableView *tableView;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateTimeEdit *dateTimeEdit_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *ok;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *cansle;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(539, 409);
        actiona = new QAction(MainWindow);
        actiona->setObjectName(QStringLiteral("actiona"));
        actionb = new QAction(MainWindow);
        actionb->setObjectName(QStringLiteral("actionb"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        calc = new QWidget();
        calc->setObjectName(QStringLiteral("calc"));
        stackedWidget->addWidget(calc);
        task = new QWidget();
        task->setObjectName(QStringLiteral("task"));
        gridLayout_2 = new QGridLayout(task);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(219, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(task);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        toolBox = new QToolBox(task);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 503, 249));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableView = new QTableView(page_3);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout_3->addWidget(tableView, 0, 0, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("\350\256\241\345\210\222"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setGeometry(QRect(0, 0, 503, 249));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(page_4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(page_4);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(page_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        textEdit = new QTextEdit(page_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        gridLayout_4->addLayout(verticalLayout, 0, 2, 4, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(page_4);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(page_4);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        gridLayout_4->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(page_4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        dateTimeEdit = new QDateTimeEdit(page_4);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));

        horizontalLayout_3->addWidget(dateTimeEdit);


        gridLayout_4->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(page_4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        dateTimeEdit_2 = new QDateTimeEdit(page_4);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));

        horizontalLayout_4->addWidget(dateTimeEdit_2);


        gridLayout_4->addLayout(horizontalLayout_4, 3, 0, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(114, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_3, 4, 0, 1, 1);

        ok = new QPushButton(page_4);
        ok->setObjectName(QStringLiteral("ok"));

        gridLayout_4->addWidget(ok, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(82, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 4, 2, 1, 1);

        cansle = new QPushButton(page_4);
        cansle->setObjectName(QStringLiteral("cansle"));

        gridLayout_4->addWidget(cansle, 4, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 4, 4, 1, 1);

        toolBox->addItem(page_4, QString::fromUtf8("\346\267\273\345\212\240"));

        gridLayout_2->addWidget(toolBox, 1, 0, 1, 3);

        stackedWidget->addWidget(task);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 539, 21));
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
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actiona->setText(QApplication::translate("MainWindow", "task", 0));
        actionb->setText(QApplication::translate("MainWindow", "calc", 0));
        label->setText(QApplication::translate("MainWindow", "\345\255\246\344\271\240\344\273\273\345\212\241", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("MainWindow", "\350\256\241\345\210\222", 0));
        label_2->setText(QApplication::translate("MainWindow", "\344\273\273\345\212\241\357\274\232", 0));
        label_6->setText(QApplication::translate("MainWindow", "\350\257\246\347\273\206\346\217\217\350\277\260\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\351\207\215\350\246\201\346\200\247\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\266\351\227\264\357\274\232", 0));
        label_5->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\227\266\351\227\264\357\274\232", 0));
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
