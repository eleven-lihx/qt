/********************************************************************************
** Form generated from reading UI file 'managermanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERMANAGE_H
#define UI_MANAGERMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManagerManage
{
public:
    QPushButton *ExitBtn;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *HrBtn;
    QPushButton *SysBtn;

    void setupUi(QWidget *ManagerManage)
    {
        if (ManagerManage->objectName().isEmpty())
            ManagerManage->setObjectName(QStringLiteral("ManagerManage"));
        ManagerManage->resize(400, 300);
        ExitBtn = new QPushButton(ManagerManage);
        ExitBtn->setObjectName(QStringLiteral("ExitBtn"));
        ExitBtn->setGeometry(QRect(210, 230, 111, 31));
        layoutWidget = new QWidget(ManagerManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 310, 37));
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

        layoutWidget1 = new QWidget(ManagerManage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 160, 261, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        HrBtn = new QPushButton(layoutWidget1);
        HrBtn->setObjectName(QStringLiteral("HrBtn"));

        horizontalLayout->addWidget(HrBtn);

        SysBtn = new QPushButton(layoutWidget1);
        SysBtn->setObjectName(QStringLiteral("SysBtn"));

        horizontalLayout->addWidget(SysBtn);


        retranslateUi(ManagerManage);

        QMetaObject::connectSlotsByName(ManagerManage);
    } // setupUi

    void retranslateUi(QWidget *ManagerManage)
    {
        ManagerManage->setWindowTitle(QApplication::translate("ManagerManage", "\347\256\241\347\220\206\345\221\230", 0));
        ExitBtn->setText(QApplication::translate("ManagerManage", "\351\200\200\345\207\272", 0));
        titlelabel->setText(QApplication::translate("ManagerManage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        HrBtn->setText(QApplication::translate("ManagerManage", "\344\272\272\344\272\213\347\256\241\347\220\206", 0));
        SysBtn->setText(QApplication::translate("ManagerManage", "\347\263\273\347\273\237\350\256\276\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class ManagerManage: public Ui_ManagerManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERMANAGE_H
