#include "page66.h"
#include "ui_page66.h"

page66::page66(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page66)
{
    ui->setupUi(this);
}

page66::~page66()
{
    delete ui;
}
