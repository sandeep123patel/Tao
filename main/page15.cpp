#include "page15.h"
#include "ui_page15.h"

page15::page15(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page15)
{
    ui->setupUi(this);
}

page15::~page15()
{
    delete ui;
}
