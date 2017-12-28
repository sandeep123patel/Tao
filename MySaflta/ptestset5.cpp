#include "ptestset5.h"
#include "ui_ptestset5.h"

PtestSet5::PtestSet5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestSet5)
{
    ui->setupUi(this);
}

PtestSet5::~PtestSet5()
{
    delete ui;
}
