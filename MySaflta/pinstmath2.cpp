#include "pinstmath2.h"
#include "ui_pinstmath2.h"

PinstMath2::PinstMath2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstMath2)
{
    ui->setupUi(this);
}

PinstMath2::~PinstMath2()
{
    delete ui;
}
