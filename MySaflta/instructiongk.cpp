#include "instructiongk.h"
#include "ui_instructiongk.h"

InstructionGk::InstructionGk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InstructionGk)
{
    ui->setupUi(this);
}

InstructionGk::~InstructionGk()
{
    delete ui;
}
