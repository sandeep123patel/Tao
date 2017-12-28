#include "ptesthindi.h"
#include "ui_ptesthindi.h"

ptesthindi::ptesthindi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ptesthindi)
{
    ui->setupUi(this);
}

ptesthindi::~ptesthindi()
{
    delete ui;
}
