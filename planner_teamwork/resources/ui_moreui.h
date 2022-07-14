/********************************************************************************
** Form generated from reading UI file 'moreui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREUI_H
#define UI_MOREUI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moreUI
{
public:
    QGridLayout *gridLayout;
    QLabel *web;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *moreUI)
    {
        if (moreUI->objectName().isEmpty())
            moreUI->setObjectName(QString::fromUtf8("moreUI"));
        moreUI->resize(600, 750);
        moreUI->setWindowTitle(QString::fromUtf8("\346\233\264\345\244\232"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/appicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        moreUI->setWindowIcon(icon);
        gridLayout = new QGridLayout(moreUI);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        web = new QLabel(moreUI);
        web->setObjectName(QString::fromUtf8("web"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(14);
        font.setItalic(true);
        font.setUnderline(true);
        web->setFont(font);
        web->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        web->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(web, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(moreUI);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));

        gridLayout->addWidget(textBrowser, 1, 0, 1, 1);


        retranslateUi(moreUI);

        QMetaObject::connectSlotsByName(moreUI);
    } // setupUi

    void retranslateUi(QWidget *moreUI)
    {
        web->setText(QCoreApplication::translate("moreUI", "\350\277\233\345\205\245\347\275\221\351\241\265\347\211\210", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("moreUI", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; font-weight:600; font-style:italic; text-decoration: underline; color:#ffaa00;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; co"
                        "lor:#000000;\">&lt;\345\205\263\344\272\216\350\275\257\344\273\266&gt;</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; text-decoration: underline; color:#000000;\">  \346\234\254\345\255\246\344\271\240\345\205\273\346\210\220\350\256\241\345\210\222\345\272\224\347\224\250\342\200\224\342\200\224</span></a><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#000000;\">planner</span></a><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; text-decoration: underline; color:#000000;\">,\347\224\261\350\275\2576\347\254\254\345\233\233\345\260\217\347\273\204\345\205\250\344\275\223\346\210\220\345\221\230\345\210\266\344\275\234\357\274\214\346\234\211\350\256\276\345\256\232\344\273\273\345\212\241\343\200\201\345\210\233\345\273\272\347\254\224\350\256\260\343"
                        "\200\201\347\244\276\345\214\272\345\205\261\344\272\253\343\200\201\347\273\237\350\256\241\345\210\206\346\236\220\343\200\201\345\210\260\346\227\266\346\217\220\351\206\222\347\255\211\345\212\237\350\203\275\357\274\214\344\273\245\345\217\257\350\247\206\345\214\226\347\232\204\345\233\276\350\241\250\344\277\203\350\277\233\344\275\277\347\224\250\350\200\205\345\246\202\346\234\237\345\256\214\346\210\220\344\273\273\345\212\241\357\274\214\346\233\264\345\245\275\345\234\260\350\247\204\345\210\222\350\207\252\345\267\261\345\234\260\347\224\237\346\264\273\343\200\202</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; text-decoration: underline; color:#000000;\">  \345\217\246\345\244\226\357\274\214\346\210\221\344\273\254\350\277\230\345\260\206\351\203\250\345\210\206\346\240\270\345\277\203\345\212\237\350\203\275\350\256\276\347\275\256"
                        "\345\234\250\347\275\221\351\241\265\347\253\257\357\274\210\347\202\271\345\207\273\344\270\212\346\226\271\351\223\276\346\216\245\350\277\233\345\205\245\357\274\211\357\274\214\346\226\271\344\276\277\346\202\250\346\233\264\346\226\271\344\276\277\345\234\260\357\274\214\344\270\215\345\217\227\350\256\276\345\244\207\347\272\246\346\235\237\345\234\260\350\256\276\345\256\232\350\256\241\345\210\222\343\200\202</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt; color:#000000;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#000000;\">&lt;\350\201\224\347\263\273\346\210\221\344\273\254&gt;</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0p"
                        "x; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#000000;\">  email</span></a><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; text-decoration: underline; color:#000000;\">:</span></a><a href=\"https://xifeng0126.github.io/\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline; color:#000000;\">xifeng0126@gmail.com </span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:10pt; font-weight:600; color:#000000;\"><br /></p></body></html>", nullptr));
        (void)moreUI;
    } // retranslateUi

};

namespace Ui {
    class moreUI: public Ui_moreUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREUI_H
