#include "page59.h"
#include "ui_page59.h"

page59::page59(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page59)
{
    ui->setupUi(this);
}

page59::~page59()
{
    delete ui;
}
