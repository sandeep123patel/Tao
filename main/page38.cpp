#include "page38.h"
#include "ui_page38.h"

page38::page38(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page38)
{
    ui->setupUi(this);
}

page38::~page38()
{
    delete ui;
}
