#include "managermanage.h"
#include "ui_managermanage.h"

ManagerManage::ManagerManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManagerManage)
{
    ui->setupUi(this);

    connect(ui->HrBtn,SIGNAL(clicked()),this,SLOT(HrbtnSlot()));
    connect(ui->SysBtn,SIGNAL(clicked()),this,SLOT(SysbtnSlot()));
    connect(hr,SIGNAL(EmitToManagerManage()),this,SLOT(setbtnEnableSlot()));
}

ManagerManage::~ManagerManage()
{
    delete ui;
}

void ManagerManage::HrbtnSlot()
{
    hr=new HrManage;
    hr->show();
    this->hide();
    return;
}

void ManagerManage::SysbtnSlot()
{
    SysParameter=new SystemParameter;
    SysParameter->show();
    this->hide();
    return;
}

void ManagerManage::setbtnEnableSlot()
{
    this->show();
}
