/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *signIn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitOut;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *passWord;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *userName;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *openLogIn;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(413, 294);
        gridLayout_2 = new QGridLayout(signup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_4 = new QWidget(signup);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        signIn = new QPushButton(widget_4);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::On);
        signIn->setIcon(icon);
        signIn->setIconSize(QSize(60, 16));
        signIn->setCheckable(true);
        signIn->setAutoRepeatInterval(96);

        horizontalLayout_5->addWidget(signIn);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        exitOut = new QPushButton(widget_4);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::On);
        exitOut->setIcon(icon1);
        exitOut->setIconSize(QSize(60, 16));

        horizontalLayout_5->addWidget(exitOut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget_4, 2, 0, 1, 1);

        widget = new QWidget(signup);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 1, 1, 1);

        passWord = new QLineEdit(widget);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passWord->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passWord, 5, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        userName = new QLineEdit(widget);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 1, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        openLogIn = new QPushButton(widget);
        openLogIn->setObjectName(QString::fromUtf8("openLogIn"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/4537006CBA78D20650F3CC6E51755E5D.png"), QSize(), QIcon::Normal, QIcon::Off);
        openLogIn->setIcon(icon2);
        openLogIn->setIconSize(QSize(60, 16));

        gridLayout->addWidget(openLogIn, 3, 2, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "\346\263\250\345\206\214", nullptr));
        signIn->setText(QString());
        exitOut->setText(QString());
        label->setText(QCoreApplication::translate("signup", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "\345\257\206\347\240\201\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "\345\267\262\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
        passWord->setText(QString());
        openLogIn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
