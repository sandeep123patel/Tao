#include "page46.h"
#include "ui_page46.h"

page46::page46(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page46)
{
    ui->setupUi(this);
}

page46::~page46()
{
    delete ui;
}
