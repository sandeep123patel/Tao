#include "thankyouenglish.h"
#include "ui_thankyouenglish.h"

thankyouenglish::thankyouenglish(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thankyouenglish)
{
    ui->setupUi(this);
}

thankyouenglish::~thankyouenglish()
{
    delete ui;
}
