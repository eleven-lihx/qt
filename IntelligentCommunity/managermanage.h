#ifndef MANAGERMANAGE_H
#define MANAGERMANAGE_H

#include <QWidget>
#include "hrmanage.h"
#include "systemparameter.h"

namespace Ui {
class ManagerManage;
}

class ManagerManage : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerManage(QWidget *parent = 0);
    ~ManagerManage();

private:
    Ui::ManagerManage *ui;
    HrManage *hr;
    SystemParameter *SysParameter;


private slots:
    void HrbtnSlot();
    void SysbtnSlot();
    void setbtnEnableSlot();
};

#endif // MANAGERMANAGE_H
