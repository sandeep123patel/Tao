#include "phinditest2.h"
#include "ui_phinditest2.h"

PhindiTest2::PhindiTest2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhindiTest2)
{
    ui->setupUi(this);
}

PhindiTest2::~PhindiTest2()
{
    delete ui;
}
