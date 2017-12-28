#include "page42.h"
#include "ui_page42.h"

page42::page42(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page42)
{
    ui->setupUi(this);
}

page42::~page42()
{
    delete ui;
}
