#include "instruction.h"
#include "ui_instruction.h"

Instruction::Instruction(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Instruction)
{
    ui->setupUi(this);
}

Instruction::~Instruction()
{
    delete ui;
}
