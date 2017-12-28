#include "page27.h"
#include "ui_page27.h"

page27::page27(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page27)
{
    ui->setupUi(this);
}

page27::~page27()
{
    delete ui;
}
