#include "page78.h"
#include "ui_page78.h"

page78::page78(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page78)
{
    ui->setupUi(this);
}

page78::~page78()
{
    delete ui;
}
