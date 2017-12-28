#include "testgk.h"
#include "ui_testgk.h"

testgk::testgk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testgk)
{
    ui->setupUi(this);
}

testgk::~testgk()
{
    delete ui;
}
