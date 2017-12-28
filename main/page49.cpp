#include "page49.h"
#include "ui_page49.h"

page49::page49(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page49)
{
    ui->setupUi(this);
}

page49::~page49()
{
    delete ui;
}
