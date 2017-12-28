#include "pinstructionmath.h"
#include "ui_pinstructionmath.h"
#include "ptestmath.h"
PinstructionMath::PinstructionMath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstructionMath)
{
    ui->setupUi(this);
}

PinstructionMath::~PinstructionMath()
{
    delete ui;
}

void PinstructionMath::on_pushButton_clicked()
{
    PtestMath *pmth = new PtestMath();
    pmth->setVisible(true);
    pmth->activateWindow();
    pmth->showFullScreen();
    this->close();
}
