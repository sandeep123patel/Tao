#include "page1.h"
#include "ui_page1.h"

page1::page1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page1)
{
    ui->setupUi(this);
}

page1::~page1()
{
    delete ui;
}
