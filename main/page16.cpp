#include "page16.h"
#include "ui_page16.h"

page16::page16(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page16)
{
    ui->setupUi(this);
}

page16::~page16()
{
    delete ui;
}
