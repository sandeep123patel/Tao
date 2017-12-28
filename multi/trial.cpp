#include "trial.h"
#include "ui_trial.h"

trial::trial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::trial)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");

}

trial::~trial()
{
    delete ui;
}
