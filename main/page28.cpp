#include "page28.h"
#include "ui_page28.h"

page28::page28(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page28)
{
    ui->setupUi(this);
}

page28::~page28()
{
    delete ui;
}
