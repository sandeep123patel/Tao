#include "page98.h"
#include "ui_page98.h"

page98::page98(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page98)
{
    ui->setupUi(this);
}

page98::~page98()
{
    delete ui;
}
