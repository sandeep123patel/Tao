#include "page91.h"
#include "ui_page91.h"

page91::page91(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page91)
{
    ui->setupUi(this);
}

page91::~page91()
{
    delete ui;
}
