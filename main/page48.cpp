#include "page48.h"
#include "ui_page48.h"

page48::page48(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page48)
{
    ui->setupUi(this);
}

page48::~page48()
{
    delete ui;
}
