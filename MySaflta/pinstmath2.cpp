#include "pinstmath2.h"
#include "ui_pinstmath2.h"
#include "ptestmath2.h"

PinstMath2::PinstMath2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstMath2)
{
    ui->setupUi(this);
}

PinstMath2::~PinstMath2()
{
    delete ui;
}

void PinstMath2::on_pushButton_clicked()
{
    PtestMath2 *pmt2 = new PtestMath2();
    pmt2->setVisible(true);
    pmt2->activateWindow();
    pmt2->showFullScreen();
    this->close();
}
