#include "page7.h"
#include "ui_page7.h"

page7::page7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page7)
{
    ui->setupUi(this);
}

page7::~page7()
{
    delete ui;
}
