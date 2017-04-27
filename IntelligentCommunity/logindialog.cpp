#include "logindialog.h"
#include "ui_logindialog.h"

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    Radiogroup=new QButtonGroup(this);
    Radiogroup->addButton(ui->ManagerRadio,0);
    Radiogroup->addButton(ui->WorkerRadio,1);
    Radiogroup->addButton(ui->OwnerRadio,2);

    //连接信号与槽,登录button与退出button
    connect(ui->loginbtn,SIGNAL(clicked()),this,SLOT(loginbtnSlot()));
    connect(ui->exitbtn,SIGNAL(clicked()),this,SLOT(exitbtnSlot()));

}

LoginDialog::~LoginDialog()
{
    delete ui;
}

//登录
void LoginDialog::loginbtnSlot()
{
    //判断用户名和密码是否为空
    if(!this->judgeEmpty())
    {
        ui->passwordline->clear();
        return;
    }


    //判断管理员登录
    if(Radiogroup->checkedId()==0)
    {

        //判断管理员账户与密码
        QSqlQuery query;
        query.prepare("select * from worker where workernum=?");
        query.addBindValue(ui->userline->text());
        query.exec();
        if(query.next())
        {
            if (query.value(1).toString() == ui->passwordline->text())
            {

                //创建管理员登录窗口
               Manager=new ManagerManage;
               Manager->show();
               this->hide();
               return;
            }
            else
            {
                QMessageBox::warning(this, tr("账号密码错误"),
                                     tr("请输入正确的账号密码再登录！"), QMessageBox::Ok);
                ui->userline->clear();
                ui->passwordline->clear();
                ui->userline->setFocus();
            }
        }
        else
            QMessageBox::information(this,tr("提示"),tr("没有此账号！"),QMessageBox::Ok);
    }
    //判断是工作人员登录
    else if(Radiogroup->checkedId()==1)
    {
        QSqlQuery query;
        query.prepare("select * from worker where workernum=?");
        query.addBindValue(ui->userline->text());
        query.exec();
        if(query.next())
        {
            if (query.value(1).toString() == ui->passwordline->text())
            {

                //创建工作人员登录窗口
                Worker=new WorkManage;
                Worker->show();
                this->hide();
                return;
            }
            else
            {
                QMessageBox::warning(this, tr("账号密码错误"),
                                     tr("请输入正确的账号密码再登录！"), QMessageBox::Ok);
                ui->userline->clear();
                ui->passwordline->clear();
                ui->userline->setFocus();
            }
        }
        else
            QMessageBox::information(this,tr("提示"),tr("没有此账号！"),QMessageBox::Ok);
    }
    //判断登录
    else if(Radiogroup->checkedId()==2)
    {
        QSqlQuery query;
        query.prepare("select * from houseowner where ownername=?");
        query.addBindValue(ui->userline->text());
        query.exec();
        if(query.next())
        {
            if (query.value(1).toString() == ui->passwordline->text())
            {

                //创建业主登录窗口
                Onner=new OnnerManage;
                Onner->show();
                this->hide();
                return;
            }
            else
            {
                QMessageBox::warning(this, tr("账号密码错误"),
                                     tr("请输入正确的账号密码再登录！"), QMessageBox::Ok);
                ui->userline->clear();
                ui->passwordline->clear();
                ui->userline->setFocus();
            }
        }
        else
            QMessageBox::information(this,tr("提示"),tr("没有此账号！"),QMessageBox::Ok);
    }
    else
        QMessageBox::warning(this,"警告","请选择登录方式",QMessageBox::Yes);
}

void LoginDialog::exitbtnSlot()
{
     this->close();
}

void LoginDialog::clearAll()
{
    ui->userline->clear();
    ui->passwordline->clear();
}

bool LoginDialog::judgeEmpty()
{
    if(ui->userline->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","用户名不能为空");
        return false;
    }
    if(ui->passwordline->text().isEmpty())
    {
        QMessageBox::warning(this,"警告","密码不能为空");
        return false;
    }
    else
        return true;
}

