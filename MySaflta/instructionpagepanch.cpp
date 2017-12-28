#include "instructionpagepanch.h"
#include "ui_instructionpagepanch.h"

InstructionpagePanch::InstructionpagePanch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionpagePanch)
{
    ui->setupUi(this);
}

InstructionpagePanch::~InstructionpagePanch()
{
    delete ui;
}
