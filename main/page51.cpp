#include "page51.h"
#include "ui_page51.h"

page51::page51(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page51)
{
    ui->setupUi(this);
}

page51::~page51()
{
    delete ui;
}
