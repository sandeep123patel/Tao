#include "page83.h"
#include "ui_page83.h"

page83::page83(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page83)
{
    ui->setupUi(this);
}

page83::~page83()
{
    delete ui;
}
