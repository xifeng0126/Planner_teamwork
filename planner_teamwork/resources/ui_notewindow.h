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
#include <QtGui/QIcon>
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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "list.h"
#include "table.h"

QT_BEGIN_NAMESPACE

class Ui_noteWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QPushButton *tasksButton;
    QSpacerItem *verticalSpacer_3;
    QStackedWidget *stackedWidget;
    QWidget *community;
    QGridLayout *gridLayout_3;
    list *listView_2;
    QWidget *myNote;
    QGridLayout *gridLayout_4;
    QPushButton *addnote;
    QSpacerItem *horizontalSpacer;
    list *listView;
    QSpacerItem *verticalSpacer;
    QPushButton *noteButton;
    QPushButton *more;
    QPushButton *tomatoButton;
    QPushButton *comButton;
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
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    table *tableView;
    table *tableView_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *noteWindow)
    {
        if (noteWindow->objectName().isEmpty())
            noteWindow->setObjectName(QString::fromUtf8("noteWindow"));
        noteWindow->resize(450, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/apple.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        noteWindow->setWindowIcon(icon);
        centralwidget = new QWidget(noteWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget_2 = new QStackedWidget(centralwidget);
        stackedWidget_2->setObjectName(QString::fromUtf8("stackedWidget_2"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tasksButton = new QPushButton(page);
        tasksButton->setObjectName(QString::fromUtf8("tasksButton"));
        tasksButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/BBFB64C24270F0A6CC0C615A226C7EA1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tasksButton->setIcon(icon1);
        tasksButton->setIconSize(QSize(80, 16));

        gridLayout_2->addWidget(tasksButton, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(page);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        community = new QWidget();
        community->setObjectName(QString::fromUtf8("community"));
        gridLayout_3 = new QGridLayout(community);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        listView_2 = new list(community);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));
        listView_2->setStyleSheet(QString::fromUtf8(" QPalette pa(this->palette());\n"
"\n"
"    QImage img = QImage(\"../resources/nbg.PNG\");\n"
"    img = img.scaled(this->size());\n"
"\n"
"\n"
"    QBrush *pic = new QBrush(img);\n"
"\n"
"    pa.setBrush(QPalette::Window,*pic);\n"
"\n"
"    //this->setAutoFillBackground(true);\n"
"    this->setPalette(pa);"));

        gridLayout_3->addWidget(listView_2, 0, 0, 1, 1);

        stackedWidget->addWidget(community);
        myNote = new QWidget();
        myNote->setObjectName(QString::fromUtf8("myNote"));
        gridLayout_4 = new QGridLayout(myNote);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        addnote = new QPushButton(myNote);
        addnote->setObjectName(QString::fromUtf8("addnote"));
        addnote->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/50AC34918CBBAA2FBC29802F50C99A66.png"), QSize(), QIcon::Normal, QIcon::Off);
        addnote->setIcon(icon2);
        addnote->setIconSize(QSize(70, 16));

        gridLayout_4->addWidget(addnote, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        listView = new list(myNote);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout_4->addWidget(listView, 0, 0, 1, 2);

        stackedWidget->addWidget(myNote);

        gridLayout_2->addWidget(stackedWidget, 0, 0, 7, 1);

        verticalSpacer = new QSpacerItem(20, 358, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 6, 1, 1, 1);

        noteButton = new QPushButton(page);
        noteButton->setObjectName(QString::fromUtf8("noteButton"));
        noteButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resources/6D14136C9A107D92EFE77D75B7035FB5.png"), QSize(), QIcon::Normal, QIcon::Off);
        noteButton->setIcon(icon3);
        noteButton->setIconSize(QSize(70, 16));

        gridLayout_2->addWidget(noteButton, 2, 1, 1, 1);

        more = new QPushButton(page);
        more->setObjectName(QString::fromUtf8("more"));
        more->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("../resources/73AD02A873A289F08630F02E631A49BC.png"), QSize(), QIcon::Normal, QIcon::Off);
        more->setIcon(icon4);
        more->setIconSize(QSize(80, 16));

        gridLayout_2->addWidget(more, 5, 1, 1, 1);

        tomatoButton = new QPushButton(page);
        tomatoButton->setObjectName(QString::fromUtf8("tomatoButton"));
        tomatoButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("../resources/7254AC58E85FA5C1CE8CA49EB6064CF4.png"), QSize(), QIcon::Normal, QIcon::Off);
        tomatoButton->setIcon(icon5);
        tomatoButton->setIconSize(QSize(70, 16));

        gridLayout_2->addWidget(tomatoButton, 4, 1, 1, 1);

        comButton = new QPushButton(page);
        comButton->setObjectName(QString::fromUtf8("comButton"));
        comButton->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("../resources/5F770C89EAA1E50FF18563ED558A3484.png"), QSize(), QIcon::Normal, QIcon::Off);
        comButton->setIcon(icon6);
        comButton->setIconSize(QSize(70, 16));

        gridLayout_2->addWidget(comButton, 1, 1, 1, 1);

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
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        horizontalLayout_2->addWidget(lineEdit);


        gridLayout_6->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

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
        save->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("../resources/37CF57182DDEB6469851836D20F00638.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon7);
        save->setIconSize(QSize(70, 16));

        gridLayout_6->addWidget(save, 3, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(21, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_3, 3, 2, 1, 1);

        cancel = new QPushButton(page_2);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8("../resources/EC5CB6F3435B6BC9B80A3D2CBC3993B4.png"), QSize(), QIcon::Normal, QIcon::Off);
        cancel->setIcon(icon8);
        cancel->setIconSize(QSize(70, 16));

        gridLayout_6->addWidget(cancel, 3, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(148, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 3, 4, 1, 1);

        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tableView = new table(page_3);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_7->addWidget(tableView, 0, 0, 1, 1);

        tableView_2 = new table(page_3);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));

        gridLayout_7->addWidget(tableView_2, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page_3);

        gridLayout->addWidget(stackedWidget_2, 0, 0, 1, 1);

        noteWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(noteWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 450, 26));
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
        tasksButton->setText(QString());
        addnote->setText(QString());
        noteButton->setText(QString());
        more->setText(QString());
        tomatoButton->setText(QString());
        comButton->setText(QString());
        label->setText(QCoreApplication::translate("noteWindow", "\346\240\207\351\242\230\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("noteWindow", "\345\206\205\345\256\271\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("noteWindow", "\346\230\257\345\220\246\345\205\254\345\274\200\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("noteWindow", "\347\247\201\346\234\211", nullptr));
        radioButton_2->setText(QCoreApplication::translate("noteWindow", "\345\205\254\345\274\200", nullptr));
        save->setText(QString());
        cancel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class noteWindow: public Ui_noteWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEWINDOW_H
