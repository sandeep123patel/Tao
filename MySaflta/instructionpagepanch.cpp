#include "instructionpagepanch.h"
#include "ui_instructionpagepanch.h"
#include "testpagepanch.h"
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

void InstructionpagePanch::on_pushButton_clicked()
{
    TestpagePanch *tpanch = new TestpagePanch();
    tpanch->setVisible(true);
    tpanch->activateWindow();
    tpanch->showFullScreen();
    this->close();
}
