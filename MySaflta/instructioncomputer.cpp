#include "instructioncomputer.h"
#include "ui_instructioncomputer.h"

InstructionComputer::InstructionComputer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionComputer)
{
    ui->setupUi(this);
}

InstructionComputer::~InstructionComputer()
{
    delete ui;
}
