#include "instructiongk.h"
#include "ui_instructiongk.h"
#include "ptestgk.h"
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

void InstructionGk::on_pushButton_clicked()
{
    Ptestgk *ptgk = new Ptestgk();
    ptgk->setVisible(true);
    ptgk->activateWindow();
    ptgk->showFullScreen();
    this->close();
}
