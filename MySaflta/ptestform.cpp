#include "ptestform.h"
#include "ui_ptestform.h"

Ptestform::Ptestform(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestform)
{
    ui->setupUi(this);
}

Ptestform::~Ptestform()
{
    delete ui;
}
