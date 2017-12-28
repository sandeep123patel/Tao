#include "thankyoureasoning.h"
#include "ui_thankyoureasoning.h"

Thankyoureasoning::Thankyoureasoning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Thankyoureasoning)
{
    ui->setupUi(this);
}

Thankyoureasoning::~Thankyoureasoning()
{
    delete ui;
}
