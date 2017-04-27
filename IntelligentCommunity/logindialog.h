#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QButtonGroup>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QDebug>
#include "managermanage.h"
#include "workmanage.h"
#include "onnermanage.h"

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();
    void clearAll();
    bool judgeEmpty();

private:
    Ui::LoginDialog *ui;
    ManagerManage *Manager;
    WorkManage *Worker;
    OnnerManage *Onner;
    QButtonGroup *Radiogroup;
    QSqlTableModel *Model;

signals:
    void toManagerManage(QString,QString);
    void toWorkerManage(QString,QString);
    void toOwnnerManage(QString,QString);
private slots:
    void exitbtnSlot();
    void loginbtnSlot();

};

#endif // LOGINDIALOG_H
