#include "page54.h"
#include "ui_page54.h"

page54::page54(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page54)
{
    ui->setupUi(this);
}

page54::~page54()
{
    delete ui;
}
