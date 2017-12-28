#include "thankyougk.h"
#include "ui_thankyougk.h"

Thankyougk::Thankyougk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Thankyougk)
{
    ui->setupUi(this);
}

Thankyougk::~Thankyougk()
{
    delete ui;
}
