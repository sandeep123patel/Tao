#include "page89.h"
#include "ui_page89.h"

page89::page89(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page89)
{
    ui->setupUi(this);
}

page89::~page89()
{
    delete ui;
}
