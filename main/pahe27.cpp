#include "pahe27.h"
#include "ui_pahe27.h"

pahe27::pahe27(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pahe27)
{
    ui->setupUi(this);
}

pahe27::~pahe27()
{
    delete ui;
}
