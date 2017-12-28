#include "page76.h"
#include "ui_page76.h"

page76::page76(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page76)
{
    ui->setupUi(this);
}

page76::~page76()
{
    delete ui;
}
