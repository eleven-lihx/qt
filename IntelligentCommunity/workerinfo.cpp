#include "workerinfo.h"
#include "ui_workerinfo.h"

WorkerInfo::WorkerInfo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WorkerInfo)
{
    ui->setupUi(this);

    //设置model实现与数据库交互
    model=new QSqlTableModel(this);
    model->setTable("worker");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->removeColumns(5,5);/*?*/
}

WorkerInfo::~WorkerInfo()
{
    delete ui;
}

void WorkerInfo::on_AddActBtn_clicked()
{
    if(!this->judgeEmpty())
        return;
    model->select();
    int i;
    for(i=0;i<model->rowCount();i++)
    {
        if(model->data(model->index(i,0)).toString()==ui->worknumlineEdit->text())
        {
            break;
        }
    }
    if(i!=model->rowCount())
    {
        QMessageBox::information(this,"提示","该人员已经存在",QMessageBox::Yes);
        this->clearAll();
        return;
    }
    QSqlRecord record=model->record();
    record.setValue("workernum",ui->worknumlineEdit->text());
    record.setValue("workerpass",ui->workpasslineEdit->text());
    record.setValue("workerphone",ui->workphonelineEdit->text());
    record.setValue("workertype",ui->yesradioButton->text());
    model->insertRecord(-1,record);
    if(model->submitAll())
    {
        QMessageBox::information(this,"提示","工作人员添加成功",QMessageBox::Yes);
        this->clearAll();
    }
}

void WorkerInfo::on_ReturnBtn_clicked()
{
    if(ui->worknumlineEdit->text().isEmpty()&&ui->workpasslineEdit->text().isEmpty()&&
       ui->workphonelineEdit->text().isEmpty())
    {
        //emit EmitToTeacherManage();
        this->hide();
        return;
    }
    if(QMessageBox::question(this,"提示","尚未保存，是否退出",QMessageBox::Yes|QMessageBox::No)==QMessageBox::Yes)
    {
        //emit EmitToTeacherManage();
        this->hide();
    }
}

bool WorkerInfo::judgeEmpty()
{
    if(ui->worknumlineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","人员编号不能为空",QMessageBox::Yes);
        return false;
    }
    else if(ui->workpasslineEdit->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","密码不能为空",QMessageBox::Yes);
        return false;
    }
    else
        return true;
}
void WorkerInfo::clearAll()
{
    ui->worknumlineEdit->clear();
    ui->workpasslineEdit->clear();
    ui->workphonelineEdit->clear();
}
