#include "logindialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //连接SQLite数据库
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    //db.setHostName("127.0.0.1");
    //db.setUserName("root");
    //db.setPassword("123");
    db.setDatabaseName("d:/1qt/IntelligentCommunity/IntelligentCommunity.db");


    if(db.open())
    {
        //显示登录界面
        LoginDialog w;
        w.show();

        return a.exec();
    }
    else
    {
        QMessageBox::information(NULL,"提示","系统载入数据库失败，无法运行",QMessageBox::Yes);
    }
    return 0;
}
