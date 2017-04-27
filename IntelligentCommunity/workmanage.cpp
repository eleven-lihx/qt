#include "workmanage.h"
#include "ui_workmanage.h"

WorkManage::WorkManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkManage)
{
    ui->setupUi(this);
}

WorkManage::~WorkManage()
{
    delete ui;
}
