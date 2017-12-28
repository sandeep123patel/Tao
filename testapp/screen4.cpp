#include "screen4.h"
#include "ui_screen4.h"

screen4::screen4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::screen4)
{
    ui->setupUi(this);
}

screen4::~screen4()
{
    delete ui;
}
