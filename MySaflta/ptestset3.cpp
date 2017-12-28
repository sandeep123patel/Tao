#include "ptestset3.h"
#include "ui_ptestset3.h"

Ptestset3::Ptestset3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestset3)
{
    ui->setupUi(this);
}

Ptestset3::~Ptestset3()
{
    delete ui;
}
