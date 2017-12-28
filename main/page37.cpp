#include "page37.h"
#include "ui_page37.h"

page37::page37(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page37)
{
    ui->setupUi(this);
}

page37::~page37()
{
    delete ui;
}
