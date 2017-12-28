#include "pinstgk2.h"
#include "ui_pinstgk2.h"
#include "ptestgk2.h"
PinstGk2::PinstGk2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstGk2)
{
    ui->setupUi(this);
}

PinstGk2::~PinstGk2()
{
    delete ui;
}

void PinstGk2::on_pushButton_clicked()
{
    PtestGk2 *ptgk2 = new PtestGk2();
    ptgk2->setVisible(true);
    ptgk2->activateWindow();
    ptgk2->showFullScreen();
    this->close();
}
