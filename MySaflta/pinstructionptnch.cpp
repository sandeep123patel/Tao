#include "pinstructionptnch.h"
#include "ui_pinstructionptnch.h"
#include "ppntchtest.h"
PinstructionPtnch::PinstructionPtnch(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstructionPtnch)
{
    ui->setupUi(this);
}

PinstructionPtnch::~PinstructionPtnch()
{
    delete ui;
}

void PinstructionPtnch::on_pushButton_clicked()
{
    PpntchTest *ptcjh = new PpntchTest();
    ptcjh->setVisible(true);
    ptcjh->activateWindow();
    ptcjh->showFullScreen();
    this->close();
}
