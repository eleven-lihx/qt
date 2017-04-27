#ifndef SYSTEMPARAMETER_H
#define SYSTEMPARAMETER_H

#include <QWidget>

namespace Ui {
class SystemParameter;
}

class SystemParameter : public QWidget
{
    Q_OBJECT

public:
    explicit SystemParameter(QWidget *parent = 0);
    ~SystemParameter();

private:
    Ui::SystemParameter *ui;
};

#endif // SYSTEMPARAMETER_H
