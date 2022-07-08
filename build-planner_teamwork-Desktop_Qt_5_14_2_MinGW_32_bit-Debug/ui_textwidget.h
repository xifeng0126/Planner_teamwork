/********************************************************************************
** Form generated from reading UI file 'textwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTWIDGET_H
#define UI_TEXTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textWidget
{
public:
    QGridLayout *gridLayout;
    QTextBrowser *textBrowser;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *textWidget)
    {
        if (textWidget->objectName().isEmpty())
            textWidget->setObjectName(QString::fromUtf8("textWidget"));
        textWidget->resize(400, 300);
        gridLayout = new QGridLayout(textWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        textBrowser = new QTextBrowser(textWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setFocusPolicy(Qt::WheelFocus);

        gridLayout->addWidget(textBrowser, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(293, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);


        retranslateUi(textWidget);

        QMetaObject::connectSlotsByName(textWidget);
    } // setupUi

    void retranslateUi(QWidget *textWidget)
    {
        textWidget->setWindowTitle(QCoreApplication::translate("textWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class textWidget: public Ui_textWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTWIDGET_H
