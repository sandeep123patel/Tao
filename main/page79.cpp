#include "page79.h"
#include "ui_page79.h"

page79::page79(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page79)
{
    ui->setupUi(this);
}

page79::~page79()
{
    delete ui;
}
