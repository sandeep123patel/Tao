#include "instruction.h"
#include "ui_instruction.h"
#include "ptestpage.h"
Instruction::Instruction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instruction)
{
    ui->setupUi(this);
}

Instruction::~Instruction()
{
    delete ui;
}

void Instruction::on_pushButton_clicked()
{
    Ptestpage ptst;
    ptst.setModal(true);
    ptst.exec();
    this->close();
}
