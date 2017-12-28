#include "instructionmath.h"
#include "ui_instructionmath.h"

InstructionMath::InstructionMath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionMath)
{
    ui->setupUi(this);
}

InstructionMath::~InstructionMath()
{
    delete ui;
}
