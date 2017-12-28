#include "page93.h"
#include "ui_page93.h"

page93::page93(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page93)
{
    ui->setupUi(this);
}

page93::~page93()
{
    delete ui;
}
