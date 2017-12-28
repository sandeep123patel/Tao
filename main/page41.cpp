#include "page41.h"
#include "ui_page41.h"

page41::page41(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page41)
{
    ui->setupUi(this);
}

page41::~page41()
{
    delete ui;
}
