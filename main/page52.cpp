#include "page52.h"
#include "ui_page52.h"

page52::page52(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page52)
{
    ui->setupUi(this);
}

page52::~page52()
{
    delete ui;
}
