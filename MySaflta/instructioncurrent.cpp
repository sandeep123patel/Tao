#include "instructioncurrent.h"
#include "ui_instructioncurrent.h"
#include "testcurrent.h"

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

void InstructionCurrent::on_pushButton_clicked()
{
    TestCurrent *curr = new TestCurrent();
    curr->setVisible(true);
    curr->activateWindow();
    curr->showFullScreen();
    this->close();
}
