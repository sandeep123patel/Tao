#include "trial.h"
#include "ui_trial.h"

trial::trial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trial)
{
    ui->setupUi(this);
}

trial::~trial()
{
    delete ui;
}
