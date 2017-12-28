#include "page25.h"
#include "ui_page25.h"

page25::page25(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page25)
{
    ui->setupUi(this);
}

page25::~page25()
{
    delete ui;
}
