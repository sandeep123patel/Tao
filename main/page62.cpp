#include "page62.h"
#include "ui_page62.h"

page62::page62(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page62)
{
    ui->setupUi(this);
}

page62::~page62()
{
    delete ui;
}
