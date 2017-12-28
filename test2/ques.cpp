#include "ques.h"
#include "ui_ques.h"

ques::ques(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ques)
{
    ui->setupUi(this);
}

ques::~ques()
{
    delete ui;
}
