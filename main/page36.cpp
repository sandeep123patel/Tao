#include "page36.h"
#include "ui_page36.h"

page36::page36(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page36)
{
    ui->setupUi(this);
}

page36::~page36()
{
    delete ui;
}
