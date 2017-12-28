#include "page23.h"
#include "ui_page23.h"

page23::page23(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page23)
{
    ui->setupUi(this);
}

page23::~page23()
{
    delete ui;
}
