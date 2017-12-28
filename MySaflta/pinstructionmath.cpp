#include "pinstructionmath.h"
#include "ui_pinstructionmath.h"

PinstructionMath::PinstructionMath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstructionMath)
{
    ui->setupUi(this);
}

PinstructionMath::~PinstructionMath()
{
    delete ui;
}
