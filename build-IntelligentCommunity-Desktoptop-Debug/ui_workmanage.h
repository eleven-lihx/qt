/********************************************************************************
** Form generated from reading UI file 'workmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKMANAGE_H
#define UI_WORKMANAGE_H

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

class Ui_WorkManage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *WorkManage)
    {
        if (WorkManage->objectName().isEmpty())
            WorkManage->setObjectName(QStringLiteral("WorkManage"));
        WorkManage->resize(400, 300);
        layoutWidget = new QWidget(WorkManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 310, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        titlelabel = new QLabel(layoutWidget);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));
        titlelabel->setStyleSheet(QStringLiteral("font: 65 20pt \"Levenim MT\";"));

        horizontalLayout_2->addWidget(titlelabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(WorkManage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 100, 301, 151));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget1);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(layoutWidget1);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(WorkManage);

        QMetaObject::connectSlotsByName(WorkManage);
    } // setupUi

    void retranslateUi(QWidget *WorkManage)
    {
        WorkManage->setWindowTitle(QApplication::translate("WorkManage", "\346\223\215\344\275\234\345\221\230", 0));
        titlelabel->setText(QApplication::translate("WorkManage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        pushButton->setText(QApplication::translate("WorkManage", "\344\270\232\344\270\273\347\256\241\347\220\206", 0));
        pushButton_3->setText(QApplication::translate("WorkManage", "\346\210\277\344\272\247\347\256\241\347\220\206", 0));
        pushButton_4->setText(QApplication::translate("WorkManage", "\346\225\205\351\232\234\347\256\241\347\220\206", 0));
        pushButton_2->setText(QApplication::translate("WorkManage", "\350\275\246\344\275\215\347\256\241\347\220\206", 0));
        pushButton_5->setText(QApplication::translate("WorkManage", "\347\274\264\350\264\271\347\256\241\347\220\206", 0));
        pushButton_6->setText(QApplication::translate("WorkManage", "\344\272\272\344\272\213\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkManage: public Ui_WorkManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKMANAGE_H
