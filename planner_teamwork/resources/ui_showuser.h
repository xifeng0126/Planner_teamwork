/********************************************************************************
** Form generated from reading UI file 'showuser.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWUSER_H
#define UI_SHOWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_showUser
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *showUser)
    {
        if (showUser->objectName().isEmpty())
            showUser->setObjectName(QString::fromUtf8("showUser"));
        showUser->resize(400, 300);
        gridLayout = new QGridLayout(showUser);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 121, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label = new QLabel(showUser);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(showUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 2, 1, 1);


        retranslateUi(showUser);

        QMetaObject::connectSlotsByName(showUser);
    } // setupUi

    void retranslateUi(QWidget *showUser)
    {
        showUser->setWindowTitle(QCoreApplication::translate("showUser", "Form", nullptr));
        label->setText(QCoreApplication::translate("showUser", "\345\210\233\345\273\272\350\200\205\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("showUser", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class showUser: public Ui_showUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWUSER_H
