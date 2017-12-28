#include "pinsthindi2.h"
#include "ui_pinsthindi2.h"

PinstHindi2::PinstHindi2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstHindi2)
{
    ui->setupUi(this);
}

PinstHindi2::~PinstHindi2()
{
    delete ui;
}
