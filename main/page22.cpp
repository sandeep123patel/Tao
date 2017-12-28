#include "page22.h"
#include "ui_page22.h"

page22::page22(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page22)
{
    ui->setupUi(this);
}

page22::~page22()
{
    delete ui;
}
