#include "page80.h"
#include "ui_page80.h"

page80::page80(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page80)
{
    ui->setupUi(this);
}

page80::~page80()
{
    delete ui;
}
