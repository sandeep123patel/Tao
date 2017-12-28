#include "ptestgk2.h"
#include "ui_ptestgk2.h"

PtestGk2::PtestGk2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestGk2)
{
    ui->setupUi(this);
}

PtestGk2::~PtestGk2()
{
    delete ui;
}
