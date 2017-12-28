#include "page24.h"
#include "ui_page24.h"

page24::page24(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page24)
{
    ui->setupUi(this);
}

page24::~page24()
{
    delete ui;
}
