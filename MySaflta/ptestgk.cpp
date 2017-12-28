#include "ptestgk.h"
#include "ui_ptestgk.h"

Ptestgk::Ptestgk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestgk)
{
    ui->setupUi(this);
}

Ptestgk::~Ptestgk()
{
    delete ui;
}
