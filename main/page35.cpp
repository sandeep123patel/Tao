#include "page35.h"
#include "ui_page35.h"

page35::page35(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page35)
{
    ui->setupUi(this);
}

page35::~page35()
{
    delete ui;
}
