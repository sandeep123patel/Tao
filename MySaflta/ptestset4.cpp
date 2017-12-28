#include "ptestset4.h"
#include "ui_ptestset4.h"

Ptestset4::Ptestset4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestset4)
{
    ui->setupUi(this);
}

Ptestset4::~Ptestset4()
{
    delete ui;
}
