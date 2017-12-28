#include "page31.h"
#include "ui_page31.h"

page31::page31(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page31)
{
    ui->setupUi(this);
}

page31::~page31()
{
    delete ui;
}
