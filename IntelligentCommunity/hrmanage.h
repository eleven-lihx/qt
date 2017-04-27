#ifndef HRMANAGE_H
#define HRMANAGE_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlRecord>
#include "workerinfo.h"

namespace Ui {
class HrManage;
}

class HrManage : public QWidget
{
    Q_OBJECT

public:
    explicit HrManage(QWidget *parent = 0);
    ~HrManage();

private slots:
    void on_WorkerAddBtn_clicked();
    void on_WorkerDelBtn_clicked();
    void on_FreeAngreeBtn_clicked();
    void on_WorkerAttenBtn_clicked();

    void on_ReturnBtn_clicked();

signals:
    void EmitToManagerManage();

private:
    Ui::HrManage *ui;
    QSqlTableModel *Model;
    WorkerInfo *WorkInfo;
};

#endif // HRMANAGE_H
