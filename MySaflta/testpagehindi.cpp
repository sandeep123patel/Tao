#include "testpagehindi.h"
#include "ui_testpagehindi.h"

TestpageHindi::TestpageHindi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestpageHindi)
{
    ui->setupUi(this);
}

TestpageHindi::~TestpageHindi()
{
    delete ui;
}
