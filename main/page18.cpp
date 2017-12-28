#include "page18.h"
#include "ui_page18.h"

page18::page18(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page18)
{
    ui->setupUi(this);
}

page18::~page18()
{
    delete ui;
}
