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
    QWidget *widget;
    QGridLayout *gridLayout;
    QLineEdit *passWord;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *userName;
    QPushButton *goToLogIn;
    QLabel *label_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *signIn;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *exitOut;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(413, 294);
        gridLayout_2 = new QGridLayout(signup);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget = new QWidget(signup);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        passWord = new QLineEdit(widget);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passWord->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passWord, 4, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        userName = new QLineEdit(widget);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 0, 2, 1, 1);

        goToLogIn = new QPushButton(widget);
        goToLogIn->setObjectName(QString::fromUtf8("goToLogIn"));

        gridLayout->addWidget(goToLogIn, 1, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        widget_4 = new QWidget(signup);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        signIn = new QPushButton(widget_4);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->setMinimumSize(QSize(80, 20));

        horizontalLayout_5->addWidget(signIn);

        horizontalSpacer_3 = new QSpacerItem(30, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        exitOut = new QPushButton(widget_4);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        exitOut->setMinimumSize(QSize(80, 20));

        horizontalLayout_5->addWidget(exitOut);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_2->addWidget(widget_4, 1, 0, 1, 1);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Form", nullptr));
        passWord->setText(QString());
        label->setText(QCoreApplication::translate("signup", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "\345\257\206\347\240\201\357\274\232", nullptr));
        goToLogIn->setText(QCoreApplication::translate("signup", "\347\202\271\345\207\273\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "\345\267\262\346\234\211\350\264\246\346\210\267\357\274\237", nullptr));
        signIn->setText(QCoreApplication::translate("signup", "\346\263\250\345\206\214", nullptr));
        exitOut->setText(QCoreApplication::translate("signup", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
