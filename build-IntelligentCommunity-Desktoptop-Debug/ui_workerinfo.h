/********************************************************************************
** Form generated from reading UI file 'workerinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKERINFO_H
#define UI_WORKERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_WorkerInfo
{
public:
    QLabel *titlelabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *worknumlineEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *workpasslineEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *workphonelineEdit;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QRadioButton *yesradioButton;
    QRadioButton *noradioButton;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *AddActBtn;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *ReturnBtn;

    void setupUi(QWidget *WorkerInfo)
    {
        if (WorkerInfo->objectName().isEmpty())
            WorkerInfo->setObjectName(QStringLiteral("WorkerInfo"));
        WorkerInfo->resize(358, 413);
        titlelabel = new QLabel(WorkerInfo);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));
        titlelabel->setGeometry(QRect(40, 30, 271, 31));
        titlelabel->setStyleSheet(QStringLiteral("font: 65 20pt \"Levenim MT\";"));
        layoutWidget = new QWidget(WorkerInfo);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 90, 251, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        worknumlineEdit = new QLineEdit(layoutWidget);
        worknumlineEdit->setObjectName(QStringLiteral("worknumlineEdit"));

        horizontalLayout->addWidget(worknumlineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        workpasslineEdit = new QLineEdit(layoutWidget);
        workpasslineEdit->setObjectName(QStringLiteral("workpasslineEdit"));

        horizontalLayout_2->addWidget(workpasslineEdit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        workphonelineEdit = new QLineEdit(layoutWidget);
        workphonelineEdit->setObjectName(QStringLiteral("workphonelineEdit"));

        horizontalLayout_3->addWidget(workphonelineEdit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        yesradioButton = new QRadioButton(layoutWidget);
        yesradioButton->setObjectName(QStringLiteral("yesradioButton"));

        horizontalLayout_4->addWidget(yesradioButton);

        noradioButton = new QRadioButton(layoutWidget);
        noradioButton->setObjectName(QStringLiteral("noradioButton"));

        horizontalLayout_4->addWidget(noradioButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);

        widget = new QWidget(WorkerInfo);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 340, 211, 41));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        AddActBtn = new QPushButton(widget);
        AddActBtn->setObjectName(QStringLiteral("AddActBtn"));

        horizontalLayout_5->addWidget(AddActBtn);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        ReturnBtn = new QPushButton(widget);
        ReturnBtn->setObjectName(QStringLiteral("ReturnBtn"));

        horizontalLayout_5->addWidget(ReturnBtn);


        retranslateUi(WorkerInfo);

        QMetaObject::connectSlotsByName(WorkerInfo);
    } // setupUi

    void retranslateUi(QWidget *WorkerInfo)
    {
        WorkerInfo->setWindowTitle(QApplication::translate("WorkerInfo", "\346\267\273\345\212\240\347\211\251\344\270\232\345\267\245\344\275\234\344\272\272\345\221\230", 0));
        titlelabel->setText(QApplication::translate("WorkerInfo", "\346\231\272\346\205\247\345\260\217\345\214\272\347\211\251\344\270\232\344\272\272\345\221\230\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("WorkerInfo", "\350\264\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("WorkerInfo", "\345\257\206\347\240\201\357\274\232", 0));
        label_3->setText(QApplication::translate("WorkerInfo", "\347\224\265\350\257\235\357\274\232", 0));
        label_4->setText(QApplication::translate("WorkerInfo", "\346\230\257\345\220\246\347\256\241\347\220\206\345\221\230\357\274\232", 0));
        yesradioButton->setText(QApplication::translate("WorkerInfo", "\346\230\257", 0));
        noradioButton->setText(QApplication::translate("WorkerInfo", "\345\220\246", 0));
        AddActBtn->setText(QApplication::translate("WorkerInfo", "\346\267\273\345\212\240", 0));
        ReturnBtn->setText(QApplication::translate("WorkerInfo", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkerInfo: public Ui_WorkerInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKERINFO_H
