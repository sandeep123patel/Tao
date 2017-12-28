#include "page85.h"
#include "ui_page85.h"

page85::page85(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page85)
{
    ui->setupUi(this);
}

page85::~page85()
{
    delete ui;
}
