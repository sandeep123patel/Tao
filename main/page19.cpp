#include "page19.h"
#include "ui_page19.h"

page19::page19(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page19)
{
    ui->setupUi(this);
}

page19::~page19()
{
    delete ui;
}
