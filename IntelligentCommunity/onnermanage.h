#ifndef ONNERMANAGE_H
#define ONNERMANAGE_H

#include <QWidget>

namespace Ui {
class OnnerManage;
}

class OnnerManage : public QWidget
{
    Q_OBJECT

public:
    explicit OnnerManage(QWidget *parent = 0);
    ~OnnerManage();

private:
    Ui::OnnerManage *ui;
};

#endif // ONNERMANAGE_H
