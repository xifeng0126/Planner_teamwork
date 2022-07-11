/********************************************************************************
** Form generated from reading UI file 'notewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEWINDOW_H
#define UI_NOTEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_noteWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_4;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QGridLayout *gridLayout;
    QPushButton *tasksButton;
    QStackedWidget *stackedWidget;
    QWidget *community;
    QGridLayout *gridLayout_3;
    QTableView *tableView_2;
    QWidget *myNote;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addnote;
    QTableView *tableView;
    QPushButton *comButton;
    QPushButton *noteButton;
    QSpacerItem *verticalSpacer;
    QPushButton *openCalendar;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *save;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *cancel;
    QSpacerItem *horizontalSpacer_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *noteWindow)
    {
        if (noteWindow->objectName().isEmpty())
            noteWindow->setObjectName(QString::fromUtf8("noteWindow"));
        noteWindow->resize(567, 518);
        centralwidget = new QWidget(noteWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_4 = new QGridLayout(centralwidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tasksButton = new QPushButton(page);
        tasksButton->setObjectName(QString::fromUtf8("tasksButton"));

        gridLayout->addWidget(tasksButton, 2, 1, 1, 1);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        community = new QWidget();
        community->setObjectName(QString::fromUtf8("community"));
        gridLayout_3 = new QGridLayout(community);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tableView_2 = new QTableView(community);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_3->addWidget(tableView_2, 0, 0, 1, 1);

        stackedWidget->addWidget(community);
        myNote = new QWidget();
        myNote->setObjectName(QString::fromUtf8("myNote"));
        gridLayout_2 = new QGridLayout(myNote);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 1, 1, 1);

        addnote = new QPushButton(myNote);
        addnote->setObjectName(QString::fromUtf8("addnote"));

        gridLayout_2->addWidget(addnote, 1, 0, 1, 1);

        tableView = new QTableView(myNote);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_2->addWidget(tableView, 0, 0, 1, 2);

        stackedWidget->addWidget(myNote);

        gridLayout->addWidget(stackedWidget, 0, 0, 5, 1);

        comButton = new QPushButton(page);
        comButton->setObjectName(QString::fromUtf8("comButton"));

        gridLayout->addWidget(comButton, 0, 1, 1, 1);

        noteButton = new QPushButton(page);
        noteButton->setObjectName(QString::fromUtf8("noteButton"));

        gridLayout->addWidget(noteButton, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 358, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        openCalendar = new QPushButton(page);
        openCalendar->setObjectName(QString::fromUtf8("openCalendar"));

        gridLayout->addWidget(openCalendar, 3, 1, 1, 1);

        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout_6->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_5->addWidget(textEdit, 0, 1, 2, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 1, 0, 1, 5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(page_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        gridLayout_6->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(350, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 2, 1, 1, 4);

        horizontalSpacer_4 = new QSpacerItem(169, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_4, 3, 0, 1, 1);

        save = new QPushButton(page_2);
        save->setObjectName(QString::fromUtf8("save"));

        gridLayout_6->addWidget(save, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        cancel = new QPushButton(page_2);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        gridLayout_6->addWidget(cancel, 3, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 3, 4, 1, 1);

        stackedWidget_2->addWidget(page_2);

        gridLayout_4->addWidget(stackedWidget_2, 0, 1, 1, 1);

        noteWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(noteWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 567, 23));
        noteWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(noteWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        noteWindow->setStatusBar(statusbar);

        retranslateUi(noteWindow);

        stackedWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(noteWindow);
    } // setupUi

    void retranslateUi(QMainWindow *noteWindow)
    {
        noteWindow->setWindowTitle(QCoreApplication::translate("noteWindow", "Planner", nullptr));
        tasksButton->setText(QCoreApplication::translate("noteWindow", "\345\255\246\344\271\240\344\273\273\345\212\241", nullptr));
        addnote->setText(QCoreApplication::translate("noteWindow", "\346\267\273\345\212\240\347\254\224\350\256\260", nullptr));
        comButton->setText(QCoreApplication::translate("noteWindow", "\347\244\276\345\214\272", nullptr));
        noteButton->setText(QCoreApplication::translate("noteWindow", "\346\210\221\347\232\204\347\254\224\350\256\260", nullptr));
        openCalendar->setText(QCoreApplication::translate("noteWindow", "\346\227\245\345\216\206", nullptr));
        label->setText(QCoreApplication::translate("noteWindow", "\346\240\207\351\242\230\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("noteWindow", "\345\206\205\345\256\271\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("noteWindow", "\346\230\257\345\220\246\345\205\254\345\274\200\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("noteWindow", "\347\247\201\346\234\211", nullptr));
        radioButton_2->setText(QCoreApplication::translate("noteWindow", "\345\205\254\345\274\200", nullptr));
        save->setText(QCoreApplication::translate("noteWindow", "\344\277\235\345\255\230", nullptr));
        cancel->setText(QCoreApplication::translate("noteWindow", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class noteWindow: public Ui_noteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEWINDOW_H
