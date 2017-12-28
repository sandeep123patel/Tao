#include "page.h"
#include "ui_page.h"

page::page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page)
{
    ui->setupUi(this);
}

page::~page()
{
    delete ui;
}
