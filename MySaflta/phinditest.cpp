#include "phinditest.h"
#include "ui_phinditest.h"

PhindiTest::PhindiTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhindiTest)
{
    ui->setupUi(this);
}

PhindiTest::~PhindiTest()
{
    delete ui;
}
