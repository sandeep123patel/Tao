#include "ptestmath2.h"
#include "ui_ptestmath2.h"

PtestMath2::PtestMath2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestMath2)
{
    ui->setupUi(this);
}

PtestMath2::~PtestMath2()
{
    delete ui;
}
