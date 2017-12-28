#include "page94.h"
#include "ui_page94.h"

page94::page94(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page94)
{
    ui->setupUi(this);
}

page94::~page94()
{
    delete ui;
}
