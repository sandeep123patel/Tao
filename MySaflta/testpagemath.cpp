#include "testpagemath.h"
#include "ui_testpagemath.h"

Testpagemath::Testpagemath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Testpagemath)
{
    ui->setupUi(this);
}

Testpagemath::~Testpagemath()
{
    delete ui;
}
