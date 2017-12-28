#include "instructioncomputer.h"
#include "ui_instructioncomputer.h"
#include "testpagecomputer.h"
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

void InstructionComputer::on_pushButton_clicked()
{
    TestpageComputer *tcom = new TestpageComputer();
    tcom->setVisible(true);
    tcom->activateWindow();
    tcom->showFullScreen();
    this->close();
}
