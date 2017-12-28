#include "page34.h"
#include "ui_page34.h"

page34::page34(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page34)
{
    ui->setupUi(this);
}

page34::~page34()
{
    delete ui;
}
