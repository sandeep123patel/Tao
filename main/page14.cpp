#include "page14.h"
#include "ui_page14.h"

page14::page14(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page14)
{
    ui->setupUi(this);
}

page14::~page14()
{
    delete ui;
}
