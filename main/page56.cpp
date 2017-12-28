#include "page56.h"
#include "ui_page56.h"

page56::page56(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page56)
{
    ui->setupUi(this);
}

page56::~page56()
{
    delete ui;
}
