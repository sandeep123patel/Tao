#include "testcurrent.h"
#include "ui_testcurrent.h"

TestCurrent::TestCurrent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestCurrent)
{
    ui->setupUi(this);
}

TestCurrent::~TestCurrent()
{
    delete ui;
}
