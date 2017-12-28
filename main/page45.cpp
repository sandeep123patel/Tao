#include "page45.h"
#include "ui_page45.h"

page45::page45(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page45)
{
    ui->setupUi(this);
}

page45::~page45()
{
    delete ui;
}
