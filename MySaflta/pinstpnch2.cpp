#include "pinstpnch2.h"
#include "ui_pinstpnch2.h"

PinstPnch2::PinstPnch2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstPnch2)
{
    ui->setupUi(this);
}

PinstPnch2::~PinstPnch2()
{
    delete ui;
}
