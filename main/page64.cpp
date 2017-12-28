#include "page64.h"
#include "ui_page64.h"

page64::page64(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page64)
{
    ui->setupUi(this);
}

page64::~page64()
{
    delete ui;
}
