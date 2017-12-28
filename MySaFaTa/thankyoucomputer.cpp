#include "thankyoucomputer.h"
#include "ui_thankyoucomputer.h"

Thankyoucomputer::Thankyoucomputer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Thankyoucomputer)
{
    ui->setupUi(this);
}

Thankyoucomputer::~Thankyoucomputer()
{
    delete ui;
}
