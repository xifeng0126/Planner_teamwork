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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QPushButton *openLogIn;
    QPushButton *exitOut;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *passWord;
    QLabel *label;
    QLineEdit *userName;
    QPushButton *signIn;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(500, 407);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/apple.PNG"), QSize(), QIcon::Normal, QIcon::Off);
        signup->setWindowIcon(icon);
        signup->setStyleSheet(QString::fromUtf8(""));
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
        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        openLogIn = new QPushButton(widget_4);
        openLogIn->setObjectName(QString::fromUtf8("openLogIn"));
        openLogIn->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("../resources/4537006CBA78D20650F3CC6E51755E5D.png"), QSize(), QIcon::Normal, QIcon::Off);
        openLogIn->setIcon(icon1);
        openLogIn->setIconSize(QSize(60, 16));

        horizontalLayout_5->addWidget(openLogIn);


        gridLayout_2->addWidget(widget_4, 4, 0, 1, 1);

        exitOut = new QPushButton(signup);
        exitOut->setObjectName(QString::fromUtf8("exitOut"));
        exitOut->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8("../resources/232BA6219E241DECDC960184E31063CD.png"), QSize(), QIcon::Normal, QIcon::On);
        exitOut->setIcon(icon2);
        exitOut->setIconSize(QSize(60, 16));

        gridLayout_2->addWidget(exitOut, 20, 0, 1, 1);

        widget = new QWidget(signup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(true);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setCursor(QCursor(Qt::ArrowCursor));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(-1, -1, 6, -1);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        passWord = new QLineEdit(widget);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passWord->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passWord, 5, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        userName = new QLineEdit(widget);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        signIn = new QPushButton(signup);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        signIn->setEnabled(true);
        signIn->setStyleSheet(QString::fromUtf8("background-color: rgba(255,255,255,70);"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8("../resources/645EC531675E93BBFDC7AEDE5743D790.png"), QSize(), QIcon::Normal, QIcon::On);
        signIn->setIcon(icon3);
        signIn->setIconSize(QSize(60, 16));
        signIn->setCheckable(true);
        signIn->setAutoRepeatInterval(96);

        gridLayout_2->addWidget(signIn, 19, 0, 1, 1);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "\345\267\262\346\234\211\350\264\246\345\217\267\357\274\237", nullptr));
        openLogIn->setText(QString());
        exitOut->setText(QString());
        label_2->setText(QCoreApplication::translate("signup", "\345\257\206\347\240\201\357\274\232", nullptr));
        passWord->setText(QCoreApplication::translate("signup", "\344\275\240\347\232\204\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("signup", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        userName->setText(QCoreApplication::translate("signup", "\344\275\240\347\232\204\347\224\250\346\210\267\345\220\215", nullptr));
        signIn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
