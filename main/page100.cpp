#include "page100.h"
#include "ui_page100.h"

page100::page100(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page100)
{
    ui->setupUi(this);
}

page100::~page100()
{
    delete ui;
}
