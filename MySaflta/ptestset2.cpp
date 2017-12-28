#include "ptestset2.h"
#include "ui_ptestset2.h"

PtestSet2::PtestSet2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestSet2)
{
    ui->setupUi(this);
}

PtestSet2::~PtestSet2()
{
    delete ui;
}
