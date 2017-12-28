#include "page82.h"
#include "ui_page82.h"

page82::page82(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page82)
{
    ui->setupUi(this);
}

page82::~page82()
{
    delete ui;
}
