#include "page69.h"
#include "ui_page69.h"

page69::page69(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page69)
{
    ui->setupUi(this);
}

page69::~page69()
{
    delete ui;
}
