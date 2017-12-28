#include "page11.h"
#include "ui_page11.h"

page11::page11(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page11)
{
    ui->setupUi(this);
}

page11::~page11()
{
    delete ui;
}
