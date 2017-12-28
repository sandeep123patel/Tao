#include "ppntchtest2.h"
#include "ui_ppntchtest2.h"

PpntchTest2::PpntchTest2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PpntchTest2)
{
    ui->setupUi(this);
}

PpntchTest2::~PpntchTest2()
{
    delete ui;
}
