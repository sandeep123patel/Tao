#include "pinstructionhindi.h"
#include "ui_pinstructionhindi.h"

PinstructionHindi::PinstructionHindi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstructionHindi)
{
    ui->setupUi(this);
}

PinstructionHindi::~PinstructionHindi()
{
    delete ui;
}
