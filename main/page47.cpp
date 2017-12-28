#include "page47.h"
#include "ui_page47.h"

page47::page47(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page47)
{
    ui->setupUi(this);
}

page47::~page47()
{
    delete ui;
}
