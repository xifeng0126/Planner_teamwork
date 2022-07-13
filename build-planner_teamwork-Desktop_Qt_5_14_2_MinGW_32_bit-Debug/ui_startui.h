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
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startui
{
public:
    QGridLayout *gridLayout;
    QPushButton *exitOut;
    QPushButton *logIn;
    QPushButton *signUp;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *startui)
    {
        if (startui->objectName().isEmpty())
            startui->setObjectName(QString::fromUtf8("startui"));
        startui->resize(407, 304);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        startui->setWindowIcon(icon);
        gridLayout = new QGridLayout(startui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        exitOut = new QPushButton(startui);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitOut->setIcon(icon1);
        exitOut->setIconSize(QSize(63, 16));

        gridLayout->addWidget(exitOut, 2, 1, 1, 1);

        logIn = new QPushButton(startui);
        logIn->setObjectName(QString::fromUtf8("logIn"));
        logIn->setAutoFillBackground(false);
        logIn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/9E90D0FDE9C043F6DAE3FFAC3F746C38.png"), QSize(), QIcon::Normal, QIcon::Off);
        logIn->setIcon(icon2);
        logIn->setIconSize(QSize(63, 16));

        gridLayout->addWidget(logIn, 0, 1, 1, 1);

        signUp = new QPushButton(startui);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::Off);
        signUp->setIcon(icon3);
        signUp->setIconSize(QSize(63, 16));

        gridLayout->addWidget(signUp, 1, 1, 1, 1);

        textBrowser = new QTextBrowser(startui);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 3, 1);


        retranslateUi(startui);

        QMetaObject::connectSlotsByName(startui);
    } // setupUi

    void retranslateUi(QWidget *startui)
    {
        startui->setWindowTitle(QCoreApplication::translate("startui", "Planner", nullptr));
        exitOut->setText(QString());
        logIn->setText(QString());
        signUp->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("startui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\344\271\240\350\256\241\345\210\222\350\275\257\344\273\266\342\200\224\342\200\224Planner\357\274\201\357\274\201\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startui: public Ui_startui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUI_H
