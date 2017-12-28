#include "sandeep.h"
#include "ui_sandeep.h"

sandeep::sandeep(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sandeep)
{
    ui->setupUi(this);
}

sandeep::~sandeep()
{
    delete ui;
}
