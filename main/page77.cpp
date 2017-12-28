#include "page77.h"
#include "ui_page77.h"

page77::page77(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page77)
{
    ui->setupUi(this);
}

page77::~page77()
{
    delete ui;
}
