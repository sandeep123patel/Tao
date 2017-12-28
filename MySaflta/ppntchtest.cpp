#include "ppntchtest.h"
#include "ui_ppntchtest.h"

PpntchTest::PpntchTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PpntchTest)
{
    ui->setupUi(this);
}

PpntchTest::~PpntchTest()
{
    delete ui;
}
