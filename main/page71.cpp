#include "page71.h"
#include "ui_page71.h"

page71::page71(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page71)
{
    ui->setupUi(this);
}

page71::~page71()
{
    delete ui;
}
