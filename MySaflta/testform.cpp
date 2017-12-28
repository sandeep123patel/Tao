#include "testform.h"
#include "ui_testform.h"

TestForm::TestForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestForm)
{
    ui->setupUi(this);
}

TestForm::~TestForm()
{
    delete ui;
}
