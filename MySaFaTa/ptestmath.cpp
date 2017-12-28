#include "ptestmath.h"
#include "ui_ptestmath.h"

ptestmath::ptestmath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ptestmath)
{
    ui->setupUi(this);
}

ptestmath::~ptestmath()
{
    delete ui;
}
