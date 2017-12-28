#include "ptestpage.h"
#include "ui_ptestpage.h"

Ptestpage::Ptestpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ptestpage)
{
    ui->setupUi(this);
}

Ptestpage::~Ptestpage()
{
    delete ui;
}
