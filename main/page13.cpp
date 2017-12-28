#include "page13.h"
#include "ui_page13.h"

page13::page13(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page13)
{
    ui->setupUi(this);
}

page13::~page13()
{
    delete ui;
}
