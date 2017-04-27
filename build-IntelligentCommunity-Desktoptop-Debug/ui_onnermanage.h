/********************************************************************************
** Form generated from reading UI file 'onnermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONNERMANAGE_H
#define UI_ONNERMANAGE_H

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

class Ui_OnnerManage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QWidget *OnnerManage)
    {
        if (OnnerManage->objectName().isEmpty())
            OnnerManage->setObjectName(QStringLiteral("OnnerManage"));
        OnnerManage->resize(400, 300);
        layoutWidget = new QWidget(OnnerManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 40, 310, 37));
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

        layoutWidget1 = new QWidget(OnnerManage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(80, 120, 271, 101));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);


        retranslateUi(OnnerManage);

        QMetaObject::connectSlotsByName(OnnerManage);
    } // setupUi

    void retranslateUi(QWidget *OnnerManage)
    {
        OnnerManage->setWindowTitle(QApplication::translate("OnnerManage", "\344\270\232\344\270\273", 0));
        titlelabel->setText(QApplication::translate("OnnerManage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        pushButton->setText(QApplication::translate("OnnerManage", "\346\210\221\347\232\204\350\275\246\344\275\215", 0));
        pushButton_3->setText(QApplication::translate("OnnerManage", "\347\274\264\350\264\271", 0));
        pushButton_2->setText(QApplication::translate("OnnerManage", "\346\225\205\351\232\234\346\212\245\344\277\256", 0));
    } // retranslateUi

};

namespace Ui {
    class OnnerManage: public Ui_OnnerManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONNERMANAGE_H
