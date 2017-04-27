/********************************************************************************
** Form generated from reading UI file 'hrmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HRMANAGE_H
#define UI_HRMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HrManage
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_1;
    QLabel *titlelabel;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ReturnBtn;
    QTableView *tableView;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *WorkerAddBtn;
    QPushButton *WorkerDelBtn;
    QPushButton *FreeAngreeBtn;
    QPushButton *WorkerAttenBtn;

    void setupUi(QWidget *HrManage)
    {
        if (HrManage->objectName().isEmpty())
            HrManage->setObjectName(QStringLiteral("HrManage"));
        HrManage->resize(732, 476);
        layoutWidget = new QWidget(HrManage);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 40, 364, 37));
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

        ReturnBtn = new QPushButton(HrManage);
        ReturnBtn->setObjectName(QStringLiteral("ReturnBtn"));
        ReturnBtn->setGeometry(QRect(630, 430, 75, 23));
        tableView = new QTableView(HrManage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(150, 90, 551, 321));
        layoutWidget1 = new QWidget(HrManage);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 90, 91, 301));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        WorkerAddBtn = new QPushButton(layoutWidget1);
        WorkerAddBtn->setObjectName(QStringLiteral("WorkerAddBtn"));

        verticalLayout->addWidget(WorkerAddBtn);

        WorkerDelBtn = new QPushButton(layoutWidget1);
        WorkerDelBtn->setObjectName(QStringLiteral("WorkerDelBtn"));

        verticalLayout->addWidget(WorkerDelBtn);

        FreeAngreeBtn = new QPushButton(layoutWidget1);
        FreeAngreeBtn->setObjectName(QStringLiteral("FreeAngreeBtn"));

        verticalLayout->addWidget(FreeAngreeBtn);

        WorkerAttenBtn = new QPushButton(layoutWidget1);
        WorkerAttenBtn->setObjectName(QStringLiteral("WorkerAttenBtn"));

        verticalLayout->addWidget(WorkerAttenBtn);


        retranslateUi(HrManage);
        QObject::connect(ReturnBtn, SIGNAL(clicked()), HrManage, SLOT(close()));

        QMetaObject::connectSlotsByName(HrManage);
    } // setupUi

    void retranslateUi(QWidget *HrManage)
    {
        HrManage->setWindowTitle(QApplication::translate("HrManage", "\344\272\272\344\272\213\347\256\241\347\220\206", 0));
        titlelabel->setText(QApplication::translate("HrManage", "\346\231\272\346\205\247\345\260\217\345\214\272\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        ReturnBtn->setText(QApplication::translate("HrManage", "\344\270\273\347\225\214\351\235\242", 0));
        WorkerAddBtn->setText(QApplication::translate("HrManage", "\344\272\272\345\221\230\346\267\273\345\212\240", 0));
        WorkerDelBtn->setText(QApplication::translate("HrManage", "\344\272\272\345\221\230\345\210\240\351\231\244", 0));
        FreeAngreeBtn->setText(QApplication::translate("HrManage", "\350\257\267\345\201\207\345\256\241\346\211\271", 0));
        WorkerAttenBtn->setText(QApplication::translate("HrManage", "\346\237\245\347\234\213\345\207\272\345\213\244", 0));
    } // retranslateUi

};

namespace Ui {
    class HrManage: public Ui_HrManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HRMANAGE_H
