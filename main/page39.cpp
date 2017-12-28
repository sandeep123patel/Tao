#include "page39.h"
#include "ui_page39.h"

page39::page39(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page39)
{
    ui->setupUi(this);
}

page39::~page39()
{
    delete ui;
}
