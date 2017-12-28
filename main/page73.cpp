#include "page73.h"
#include "ui_page73.h"

page73::page73(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page73)
{
    ui->setupUi(this);
}

page73::~page73()
{
    delete ui;
}
