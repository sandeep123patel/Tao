#include "page44.h"
#include "ui_page44.h"

page44::page44(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page44)
{
    ui->setupUi(this);
}

page44::~page44()
{
    delete ui;
}
