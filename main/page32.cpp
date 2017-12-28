#include "page32.h"
#include "ui_page32.h"

page32::page32(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page32)
{
    ui->setupUi(this);
}

page32::~page32()
{
    delete ui;
}
