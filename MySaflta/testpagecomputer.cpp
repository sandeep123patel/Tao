#include "testpagecomputer.h"
#include "ui_testpagecomputer.h"

TestpageComputer::TestpageComputer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestpageComputer)
{
    ui->setupUi(this);
}

TestpageComputer::~TestpageComputer()
{
    delete ui;
}
