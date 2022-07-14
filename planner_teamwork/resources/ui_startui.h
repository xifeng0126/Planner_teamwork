/********************************************************************************
** Form generated from reading UI file 'startui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUI_H
#define UI_STARTUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startui
{
public:
    QGridLayout *gridLayout;
    QPushButton *logIn;
    QPushButton *exitOut;
    QPushButton *signUp;

    void setupUi(QWidget *startui)
    {
        if (startui->objectName().isEmpty())
            startui->setObjectName(QString::fromUtf8("startui"));
        startui->resize(452, 604);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        startui->setWindowIcon(icon);
        startui->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(startui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        logIn = new QPushButton(startui);
        logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->setAutoFillBackground(false);
        logIn->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/9E90D0FDE9C043F6DAE3FFAC3F746C38.png"), QSize(), QIcon::Normal, QIcon::Off);
        logIn->setIcon(icon1);
        logIn->setIconSize(QSize(63, 16));

        gridLayout->addWidget(logIn, 0, 0, 1, 1);

        exitOut = new QPushButton(startui);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        exitOut->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitOut->setIcon(icon2);
        exitOut->setIconSize(QSize(63, 16));

        gridLayout->addWidget(exitOut, 4, 0, 1, 1);

        signUp = new QPushButton(startui);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        signUp->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUp->setIcon(icon3);
        signUp->setIconSize(QSize(63, 16));

        gridLayout->addWidget(signUp, 3, 0, 1, 1);


        retranslateUi(startui);

        QMetaObject::connectSlotsByName(startui);
    } // setupUi

    void retranslateUi(QWidget *startui)
    {
        startui->setWindowTitle(QCoreApplication::translate("startui", "Planner", nullptr));
        logIn->setText(QString());
        exitOut->setText(QString());
        signUp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class startui: public Ui_startui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUI_H
