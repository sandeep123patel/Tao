#include "page30.h"
#include "ui_page30.h"

page30::page30(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page30)
{
    ui->setupUi(this);
}

page30::~page30()
{
    delete ui;
}
