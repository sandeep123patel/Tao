#include "page57.h"
#include "ui_page57.h"

page57::page57(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page57)
{
    ui->setupUi(this);
}

page57::~page57()
{
    delete ui;
}
