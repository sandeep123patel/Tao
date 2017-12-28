#include "intstructionhindi.h"
#include "ui_intstructionhindi.h"

IntstructionHindi::IntstructionHindi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntstructionHindi)
{
    ui->setupUi(this);
}

IntstructionHindi::~IntstructionHindi()
{
    delete ui;
}
