#include "page8.h"
#include "ui_page8.h"

page8::page8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page8)
{
    ui->setupUi(this);
}

page8::~page8()
{
    delete ui;
}
