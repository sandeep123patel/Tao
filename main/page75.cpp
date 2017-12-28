#include "page75.h"
#include "ui_page75.h"

page75::page75(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page75)
{
    ui->setupUi(this);
}

page75::~page75()
{
    delete ui;
}
