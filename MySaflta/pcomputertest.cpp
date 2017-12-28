#include "pcomputertest.h"
#include "ui_pcomputertest.h"

PcomputerTest::PcomputerTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PcomputerTest)
{
    ui->setupUi(this);
}

PcomputerTest::~PcomputerTest()
{
    delete ui;
}
