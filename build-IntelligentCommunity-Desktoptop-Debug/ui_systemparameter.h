/********************************************************************************
** Form generated from reading UI file 'systemparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMPARAMETER_H
#define UI_SYSTEMPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemParameter
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_1;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SystemParameter)
    {
        if (SystemParameter->objectName().isEmpty())
            SystemParameter->setObjectName(QStringLiteral("SystemParameter"));
        SystemParameter->resize(400, 300);
        layoutWidget = new QWidget(SystemParameter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 364, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
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

        pushButton_3 = new QPushButton(SystemParameter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 230, 75, 23));
        widget = new QWidget(SystemParameter);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 90, 101, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(SystemParameter);

        QMetaObject::connectSlotsByName(SystemParameter);
    } // setupUi

    void retranslateUi(QWidget *SystemParameter)
    {
        SystemParameter->setWindowTitle(QApplication::translate("SystemParameter", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
        titlelabel->setText(QApplication::translate("SystemParameter", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        pushButton_3->setText(QApplication::translate("SystemParameter", "\350\277\224\345\233\236", 0));
        pushButton->setText(QApplication::translate("SystemParameter", "\345\217\202\346\225\260\350\256\276\347\275\256", 0));
        pushButton_2->setText(QApplication::translate("SystemParameter", "\347\263\273\347\273\237\345\210\235\345\247\213\345\214\226", 0));
    } // retranslateUi

};

namespace Ui {
    class SystemParameter: public Ui_SystemParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMPARAMETER_H
