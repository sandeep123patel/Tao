#include "ptestmath.h"
#include "ui_ptestmath.h"

PtestMath::PtestMath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestMath)
{
    ui->setupUi(this);
}

PtestMath::~PtestMath()
{
    delete ui;
}
