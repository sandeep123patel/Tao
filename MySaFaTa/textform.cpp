#include "textform.h"
#include "ui_textform.h"

Textform::Textform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Textform)
{
    ui->setupUi(this);
}

Textform::~Textform()
{
    delete ui;
}
