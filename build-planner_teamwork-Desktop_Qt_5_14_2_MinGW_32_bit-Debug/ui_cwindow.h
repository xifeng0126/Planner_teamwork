/********************************************************************************
** Form generated from reading UI file 'cwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CWINDOW_H
#define UI_CWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *CWindow)
    {
        if (CWindow->objectName().isEmpty())
            CWindow->setObjectName(QString::fromUtf8("CWindow"));
        CWindow->resize(367, 311);
        gridLayout = new QGridLayout(CWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(CWindow);

        QMetaObject::connectSlotsByName(CWindow);
    } // setupUi

    void retranslateUi(QWidget *CWindow)
    {
        CWindow->setWindowTitle(QCoreApplication::translate("CWindow", "calendar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CWindow: public Ui_CWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CWINDOW_H
