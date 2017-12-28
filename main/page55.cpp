#include "page55.h"
#include "ui_page55.h"

page55::page55(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page55)
{
    ui->setupUi(this);
}

page55::~page55()
{
    delete ui;
}
