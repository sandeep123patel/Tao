#include "screen3.h"
#include "ui_screen3.h"

screen3::screen3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen3)
{
    ui->setupUi(this);
}

screen3::~screen3()
{
    delete ui;
}
