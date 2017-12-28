#include "page21.h"
#include "ui_page21.h"

page21::page21(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page21)
{
    ui->setupUi(this);
}

page21::~page21()
{
    delete ui;
}
