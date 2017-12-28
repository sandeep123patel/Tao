#include "tankyou.h"
#include "ui_tankyou.h"

Tankyou::Tankyou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tankyou)
{
    ui->setupUi(this);
}

Tankyou::~Tankyou()
{
    delete ui;
}
