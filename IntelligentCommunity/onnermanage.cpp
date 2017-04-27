#include "onnermanage.h"
#include "ui_onnermanage.h"

OnnerManage::OnnerManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OnnerManage)
{
    ui->setupUi(this);
}

OnnerManage::~OnnerManage()
{
    delete ui;
}
