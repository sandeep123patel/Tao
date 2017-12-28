#include "page20.h"
#include "ui_page20.h"

page20::page20(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page20)
{
    ui->setupUi(this);
}

page20::~page20()
{
    delete ui;
}
