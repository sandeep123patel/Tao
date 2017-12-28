#include "page43.h"
#include "ui_page43.h"

page43::page43(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page43)
{
    ui->setupUi(this);
}

page43::~page43()
{
    delete ui;
}
