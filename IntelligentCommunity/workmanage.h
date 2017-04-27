#ifndef WORKMANAGE_H
#define WORKMANAGE_H

#include <QWidget>

namespace Ui {
class WorkManage;
}

class WorkManage : public QWidget
{
    Q_OBJECT

public:
    explicit WorkManage(QWidget *parent = 0);
    ~WorkManage();

private:
    Ui::WorkManage *ui;
};

#endif // WORKMANAGE_H
