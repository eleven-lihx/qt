#include "systemparameter.h"
#include "ui_systemparameter.h"

SystemParameter::SystemParameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemParameter)
{
    ui->setupUi(this);
}

SystemParameter::~SystemParameter()
{
    delete ui;
}
