#include "pinstmulti.h"
#include "ui_pinstmulti.h"

PinstMulti::PinstMulti(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstMulti)
{
    ui->setupUi(this);
}

PinstMulti::~PinstMulti()
{
    delete ui;
}
