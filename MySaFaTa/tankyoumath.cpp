#include "tankyoumath.h"
#include "ui_tankyoumath.h"

Tankyoumath::Tankyoumath(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tankyoumath)
{
    ui->setupUi(this);
}

Tankyoumath::~Tankyoumath()
{
    delete ui;
}
