#include "page58.h"
#include "ui_page58.h"

page58::page58(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page58)
{
    ui->setupUi(this);
}

page58::~page58()
{
    delete ui;
}
