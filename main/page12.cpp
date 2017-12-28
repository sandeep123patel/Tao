#include "page12.h"
#include "ui_page12.h"

page12::page12(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page12)
{
    ui->setupUi(this);
}

page12::~page12()
{
    delete ui;
}
