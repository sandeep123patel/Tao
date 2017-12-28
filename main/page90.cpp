#include "page90.h"
#include "ui_page90.h"

page90::page90(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page90)
{
    ui->setupUi(this);
}

page90::~page90()
{
    delete ui;
}
