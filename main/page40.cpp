#include "page40.h"
#include "ui_page40.h"

page40::page40(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page40)
{
    ui->setupUi(this);
}

page40::~page40()
{
    delete ui;
}
