#include "testpagepanch.h"
#include "ui_testpagepanch.h"

TestpagePanch::TestpagePanch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestpagePanch)
{
    ui->setupUi(this);
}

TestpagePanch::~TestpagePanch()
{
    delete ui;
}
