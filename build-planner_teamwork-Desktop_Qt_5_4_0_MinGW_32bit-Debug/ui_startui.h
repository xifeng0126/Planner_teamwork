/********************************************************************************
** Form generated from reading UI file 'startui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUI_H
#define UI_STARTUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startui
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QPushButton *logIn;
    QPushButton *signUp;
    QPushButton *exitOut;

    void setupUi(QWidget *startui)
    {
        if (startui->objectName().isEmpty())
            startui->setObjectName(QStringLiteral("startui"));
        startui->resize(407, 304);
        gridLayout = new QGridLayout(startui);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textBrowser = new QTextBrowser(startui);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        gridLayout->addWidget(textBrowser, 0, 0, 3, 1);

        logIn = new QPushButton(startui);
        logIn->setObjectName(QStringLiteral("logIn"));

        gridLayout->addWidget(logIn, 0, 1, 1, 1);

        signUp = new QPushButton(startui);
        signUp->setObjectName(QStringLiteral("signUp"));

        gridLayout->addWidget(signUp, 1, 1, 1, 1);

        exitOut = new QPushButton(startui);
        exitOut->setObjectName(QStringLiteral("exitOut"));

        gridLayout->addWidget(exitOut, 2, 1, 1, 1);


        retranslateUi(startui);

        QMetaObject::connectSlotsByName(startui);
    } // setupUi

    void retranslateUi(QWidget *startui)
    {
        startui->setWindowTitle(QApplication::translate("startui", "Form", 0));
        textBrowser->setHtml(QApplication::translate("startui", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\346\254\242\350\277\216\344\275\277\347\224\250\345\255\246\344\271\240\350\256\241\345\210\222\350\275\257\344\273\266\342\200\224\342\200\224Planner\357\274\201\357\274\201\357\274\201</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
""
                        "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        logIn->setText(QApplication::translate("startui", "\347\231\273\345\275\225", 0));
        signUp->setText(QApplication::translate("startui", "\346\263\250\345\206\214", 0));
        exitOut->setText(QApplication::translate("startui", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class startui: public Ui_startui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUI_H
