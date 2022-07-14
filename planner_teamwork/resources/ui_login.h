/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *signIn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitOut;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QCheckBox *passwordSaving;
    QSpacerItem *verticalSpacer;
    QLineEdit *passWord;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *userName;
    QPushButton *openSignUp;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(500, 401);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/apple.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        login->setStyleSheet(QString::fromUtf8(""));
        widget_4 = new QWidget(login);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(40, 320, 378, 50));
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
        signIn->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/9E90D0FDE9C043F6DAE3FFAC3F746C38.png"), QSize(), QIcon::Normal, QIcon::Off);
        signIn->setIcon(icon1);
        signIn->setIconSize(QSize(60, 16));

        horizontalLayout_5->addWidget(signIn);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        exitOut = new QPushButton(widget_4);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        exitOut->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitOut->setIcon(icon2);
        exitOut->setIconSize(QSize(60, 16));

        horizontalLayout_5->addWidget(exitOut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 180, 378, 118));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        passwordSaving = new QCheckBox(widget);
        passwordSaving->setObjectName(QString::fromUtf8("passwordSaving"));

        gridLayout->addWidget(passwordSaving, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        passWord = new QLineEdit(widget);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passWord, 3, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        userName = new QLineEdit(widget);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 0, 2, 1, 1);

        openSignUp = new QPushButton(widget);
        openSignUp->setObjectName(QString::fromUtf8("openSignUp"));
        openSignUp->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resources/0C05E4AE59C02077D832BA0FE2C810DD.png"), QSize(), QIcon::Normal, QIcon::Off);
        openSignUp->setIcon(icon3);
        openSignUp->setIconSize(QSize(80, 16));

        gridLayout->addWidget(openSignUp, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        signIn->setText(QString());
        exitOut->setText(QString());
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201\357\274\232", nullptr));
        passwordSaving->setText(QCoreApplication::translate("login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\346\262\241\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
        openSignUp->setText(QString());
        label->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
