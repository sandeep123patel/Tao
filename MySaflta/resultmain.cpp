#include "resultmain.h"
#include "ui_resultmain.h"

Resultmain::Resultmain(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Resultmain)
{
    ui->setupUi(this);
}

Resultmain::~Resultmain()
{
    delete ui;
}
