#include "page50.h"
#include "ui_page50.h"

page50::page50(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page50)
{
    ui->setupUi(this);
}

page50::~page50()
{
    delete ui;
}
