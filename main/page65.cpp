#include "page65.h"
#include "ui_page65.h"

page65::page65(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page65)
{
    ui->setupUi(this);
}

page65::~page65()
{
    delete ui;
}
