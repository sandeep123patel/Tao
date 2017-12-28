#include "page99.h"
#include "ui_page99.h"

page99::page99(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page99)
{
    ui->setupUi(this);
}

page99::~page99()
{
    delete ui;
}
