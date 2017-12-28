#include "page68.h"
#include "ui_page68.h"

page68::page68(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page68)
{
    ui->setupUi(this);
}

page68::~page68()
{
    delete ui;
}
