#include "instructionmath.h"
#include "ui_instructionmath.h"
#include "testpagemath.h"
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

void InstructionMath::on_pushButton_clicked()
{
    Testpagemath *tmath = new Testpagemath();
    tmath->setVisible(true);
    tmath->activateWindow();
    tmath->showFullScreen();
    this->close();
}
