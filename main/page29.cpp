#include "page29.h"
#include "ui_page29.h"

page29::page29(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page29)
{
    ui->setupUi(this);
}

page29::~page29()
{
    delete ui;
}
