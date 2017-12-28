#include "pinstcom2.h"
#include "ui_pinstcom2.h"

Pinstcom2::Pinstcom2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pinstcom2)
{
    ui->setupUi(this);
}

Pinstcom2::~Pinstcom2()
{
    delete ui;
}
