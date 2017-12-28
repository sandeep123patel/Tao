#include "page72.h"
#include "ui_page72.h"

page72::page72(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page72)
{
    ui->setupUi(this);
}

page72::~page72()
{
    delete ui;
}
