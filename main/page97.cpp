#include "page97.h"
#include "ui_page97.h"

page97::page97(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page97)
{
    ui->setupUi(this);
}

page97::~page97()
{
    delete ui;
}
