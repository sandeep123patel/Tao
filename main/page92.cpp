#include "page92.h"
#include "ui_page92.h"

page92::page92(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page92)
{
    ui->setupUi(this);
}

page92::~page92()
{
    delete ui;
}
