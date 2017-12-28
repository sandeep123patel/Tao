#include "page60.h"
#include "ui_page60.h"

page60::page60(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page60)
{
    ui->setupUi(this);
}

page60::~page60()
{
    delete ui;
}
