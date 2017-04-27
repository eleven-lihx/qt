#include "hrmanage.h"
#include "ui_hrmanage.h"

HrManage::HrManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HrManage)
{
    ui->setupUi(this);

    //创建QSqlTableModel
    Model=new QSqlTableModel(this);
    Model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    Model->setTable("worker");
    Model->select();
    ui->tableView->setModel(Model);
}

HrManage::~HrManage()
{
    delete ui;
}



void HrManage::on_WorkerAddBtn_clicked()
{
    WorkInfo=new WorkerInfo;
    WorkInfo->show();
}

void HrManage::on_WorkerDelBtn_clicked()
{
    //获取当前鼠标行
    int curRow=ui->tableView->currentIndex().row();
    //删除当前行
    Model->removeRow(curRow);
    int ok=QMessageBox::warning(this,tr("删除当前行")
                                ,tr("你确定删除当前行吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        Model->revertAll();
    }
    else
    {
        Model->submitAll();


    }
}

void HrManage::on_FreeAngreeBtn_clicked()
{
    Model->setTable("workerattend");
    Model->select();
    ui->tableView->setModel(Model);
}

void HrManage::on_WorkerAttenBtn_clicked()
{
    Model->setTable("workerattend");
    Model->select();
    ui->tableView->setModel(Model);
}

void HrManage::on_ReturnBtn_clicked()
{
    this->hide();
    //emit EmitToManagerManage();
}
