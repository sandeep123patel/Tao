#include "page61.h"
#include "ui_page61.h"

page61::page61(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page61)
{
    ui->setupUi(this);
}

page61::~page61()
{
    delete ui;
}
