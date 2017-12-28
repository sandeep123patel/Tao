#include "pinstructionhindi.h"
#include "ui_pinstructionhindi.h"
#include "phinditest.h"
PinstructionHindi::PinstructionHindi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstructionHindi)
{
    ui->setupUi(this);
}

PinstructionHindi::~PinstructionHindi()
{
    delete ui;
}

void PinstructionHindi::on_pushButton_clicked()
{
    PhindiTest *phnd = new PhindiTest();
    phnd->setVisible(true);
    phnd->activateWindow();
    phnd->showFullScreen();
    this->close();
}
