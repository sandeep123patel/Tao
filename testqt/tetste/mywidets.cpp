#include "mywidets.h"
#include "ui_mywidets.h"

mywidets::mywidets(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mywidets)
{
    ui->setupUi(this);
}

mywidets::~mywidets()
{
    delete ui;
}
