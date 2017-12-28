#include "instructioncurrent.h"
#include "ui_instructioncurrent.h"

InstructionCurrent::InstructionCurrent(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionCurrent)
{
    ui->setupUi(this);
}

InstructionCurrent::~InstructionCurrent()
{
    delete ui;
}
