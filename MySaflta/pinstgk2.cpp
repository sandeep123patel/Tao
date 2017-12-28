#include "pinstgk2.h"
#include "ui_pinstgk2.h"

PinstGk2::PinstGk2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstGk2)
{
    ui->setupUi(this);
}

PinstGk2::~PinstGk2()
{
    delete ui;
}
