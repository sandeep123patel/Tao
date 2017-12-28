#include "page81.h"
#include "ui_page81.h"

page81::page81(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page81)
{
    ui->setupUi(this);
}

page81::~page81()
{
    delete ui;
}
