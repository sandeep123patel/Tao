#include "ptestgk.h"
#include "ui_ptestgk.h"

ptestgk::ptestgk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ptestgk)
{
    ui->setupUi(this);
}

ptestgk::~ptestgk()
{
    delete ui;
}
