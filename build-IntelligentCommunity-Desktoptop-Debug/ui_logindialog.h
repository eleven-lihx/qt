/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_1;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *loginbtn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *exitbtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *usernumlabel;
    QLineEdit *userline;
    QHBoxLayout *horizontalLayout_3;
    QLabel *passwordlabel;
    QLineEdit *passwordline;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QRadioButton *ManagerRadio;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *WorkerRadio;
    QSpacerItem *horizontalSpacer_9;
    QRadioButton *OwnerRadio;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(400, 300);
        layoutWidget = new QWidget(LoginDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(24, 29, 364, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_1);

        titlelabel = new QLabel(layoutWidget);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));
        titlelabel->setStyleSheet(QStringLiteral("font: 65 20pt \"Levenim MT\";"));

        horizontalLayout->addWidget(titlelabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(LoginDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 230, 251, 33));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        loginbtn = new QPushButton(layoutWidget1);
        loginbtn->setObjectName(QStringLiteral("loginbtn"));
        loginbtn->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\";\346\263\250\345\206\214\n"
""));

        horizontalLayout_5->addWidget(loginbtn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        exitbtn = new QPushButton(layoutWidget1);
        exitbtn->setObjectName(QStringLiteral("exitbtn"));
        exitbtn->setStyleSheet(QStringLiteral("font: 75 10pt \"Segoe Print\";"));

        horizontalLayout_5->addWidget(exitbtn);

        widget = new QWidget(LoginDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(105, 99, 182, 55));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        usernumlabel = new QLabel(widget);
        usernumlabel->setObjectName(QStringLiteral("usernumlabel"));
        usernumlabel->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\";\347\224\250\346\210\267\345\220\215"));

        horizontalLayout_2->addWidget(usernumlabel);

        userline = new QLineEdit(widget);
        userline->setObjectName(QStringLiteral("userline"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userline->sizePolicy().hasHeightForWidth());
        userline->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(userline);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        passwordlabel = new QLabel(widget);
        passwordlabel->setObjectName(QStringLiteral("passwordlabel"));
        passwordlabel->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\"\345\257\206\347\240\201"));

        horizontalLayout_3->addWidget(passwordlabel);

        passwordline = new QLineEdit(widget);
        passwordline->setObjectName(QStringLiteral("passwordline"));
        sizePolicy.setHeightForWidth(passwordline->sizePolicy().hasHeightForWidth());
        passwordline->setSizePolicy(sizePolicy);
        passwordline->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(passwordline);


        verticalLayout->addLayout(horizontalLayout_3);

        widget1 = new QWidget(LoginDialog);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(70, 180, 267, 29));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_8 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        ManagerRadio = new QRadioButton(widget1);
        ManagerRadio->setObjectName(QStringLiteral("ManagerRadio"));
        ManagerRadio->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\";\345\255\246\347\224\237\347\231\273\345\275\225"));

        horizontalLayout_4->addWidget(ManagerRadio);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        WorkerRadio = new QRadioButton(widget1);
        WorkerRadio->setObjectName(QStringLiteral("WorkerRadio"));
        WorkerRadio->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\";\346\225\231\345\270\210\347\231\273\345\275\225"));

        horizontalLayout_4->addWidget(WorkerRadio);

        horizontalSpacer_9 = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        OwnerRadio = new QRadioButton(widget1);
        OwnerRadio->setObjectName(QStringLiteral("OwnerRadio"));
        OwnerRadio->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Segoe Print\";\346\225\231\345\270\210\347\231\273\345\275\225"));

        horizontalLayout_4->addWidget(OwnerRadio);


        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        titlelabel->setText(QApplication::translate("LoginDialog", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        loginbtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0));
        exitbtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0));
        usernumlabel->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267\357\274\232", 0));
        passwordlabel->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", 0));
        ManagerRadio->setText(QApplication::translate("LoginDialog", "\347\256\241\347\220\206\345\221\230", 0));
        WorkerRadio->setText(QApplication::translate("LoginDialog", "\345\267\245\344\275\234\344\272\272\345\221\230", 0));
        OwnerRadio->setText(QApplication::translate("LoginDialog", "\344\270\232\344\270\273", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
