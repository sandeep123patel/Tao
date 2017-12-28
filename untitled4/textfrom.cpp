#include "textfrom.h"
#include "ui_textfrom.h"

Textfrom::Textfrom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Textfrom)
{
    ui->setupUi(this);
}

Textfrom::~Textfrom()
{
    delete ui;
}
