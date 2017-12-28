#include "page17.h"
#include "ui_page17.h"

page17::page17(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page17)
{
    ui->setupUi(this);
}

page17::~page17()
{
    delete ui;
}
