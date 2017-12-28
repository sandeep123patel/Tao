#include "page70.h"
#include "ui_page70.h"

page70::page70(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page70)
{
    ui->setupUi(this);
}

page70::~page70()
{
    delete ui;
}
