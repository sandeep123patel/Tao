#include "page96.h"
#include "ui_page96.h"

page96::page96(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page96)
{
    ui->setupUi(this);
}

page96::~page96()
{
    delete ui;
}
