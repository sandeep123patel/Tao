#include "testmath.h"
#include "ui_testmath.h"

Testmath::Testmath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Testmath)
{
    ui->setupUi(this);
}

Testmath::~Testmath()
{
    delete ui;
}
