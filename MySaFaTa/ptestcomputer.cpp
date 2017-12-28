#include "ptestcomputer.h"
#include "ui_ptestcomputer.h"

ptestcomputer::ptestcomputer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ptestcomputer)
{
    ui->setupUi(this);
}

ptestcomputer::~ptestcomputer()
{
    delete ui;
}
