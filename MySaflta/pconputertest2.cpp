#include "pconputertest2.h"
#include "ui_pconputertest2.h"

PconputerTest2::PconputerTest2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PconputerTest2)
{
    ui->setupUi(this);
}

PconputerTest2::~PconputerTest2()
{
    delete ui;
}
