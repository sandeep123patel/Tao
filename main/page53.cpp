#include "page53.h"
#include "ui_page53.h"

page53::page53(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page53)
{
    ui->setupUi(this);
}

page53::~page53()
{
    delete ui;
}
