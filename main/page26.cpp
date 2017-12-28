#include "page26.h"
#include "ui_page26.h"

page26::page26(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page26)
{
    ui->setupUi(this);
}

page26::~page26()
{
    delete ui;
}
