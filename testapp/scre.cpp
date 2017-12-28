#include "scre.h"
#include "ui_scre.h"

scre::scre(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::scre)
{
    ui->setupUi(this);
}

scre::~scre()
{
    delete ui;
}
