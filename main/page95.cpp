#include "page95.h"
#include "ui_page95.h"

page95::page95(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page95)
{
    ui->setupUi(this);
}

page95::~page95()
{
    delete ui;
}
