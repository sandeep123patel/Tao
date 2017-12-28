#include "pinstructionptnch.h"
#include "ui_pinstructionptnch.h"

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
