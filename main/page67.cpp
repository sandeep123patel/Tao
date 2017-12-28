#include "page67.h"
#include "ui_page67.h"

page67::page67(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page67)
{
    ui->setupUi(this);
}

page67::~page67()
{
    delete ui;
}
