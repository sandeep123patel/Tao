#include "page87.h"
#include "ui_page87.h"

page87::page87(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page87)
{
    ui->setupUi(this);
}

page87::~page87()
{
    delete ui;
}
