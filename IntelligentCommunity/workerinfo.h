#ifndef WORKERINFO_H
#define WORKERINFO_H

#include <QWidget>
#include <QDebug>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QSqlRecord>

namespace Ui {
class WorkerInfo;
}

class WorkerInfo : public QWidget
{
    Q_OBJECT

public:
    explicit WorkerInfo(QWidget *parent = 0);
    ~WorkerInfo();
    bool judgeEmpty();
    void clearAll();

private slots:
    void on_AddActBtn_clicked();

    void on_ReturnBtn_clicked();

private:
    Ui::WorkerInfo *ui;
    QSqlTableModel *model;
};

#endif // WORKERINFO_H
