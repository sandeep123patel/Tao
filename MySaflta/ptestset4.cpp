#include "ptestset4.h"
#include "ui_ptestset4.h"
#include "pinstructionptnch.h"
#include "pinstpnch2.h"
#include "pinstmulti.h"
Ptestset4::Ptestset4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestset4)
{
    ui->setupUi(this);
}

Ptestset4::~Ptestset4()
{
    delete ui;
}

void Ptestset4::on_pushButton_2_clicked()
{
        PinstructionPtnch *pipnch = new PinstructionPtnch();
        pipnch->setVisible(true);
        pipnch->activateWindow();
        pipnch->showFullScreen();
}

void Ptestset4::on_pushButton_clicked()
{
    PinstPnch2 *pntc2 = new PinstPnch2();
    pntc2->setVisible(true);
    pntc2->activateWindow();
    pntc2->showFullScreen();
}

void Ptestset4::on_pushButton_4_clicked()
{
    PinstMulti *pmtl = new PinstMulti();
    pmtl->setVisible(true);
    pmtl->activateWindow();
    pmtl->showFullScreen();
}

void Ptestset4::on_pushButton_3_clicked()
{
    PinstMulti *pmtl = new PinstMulti();
    pmtl->setVisible(true);
    pmtl->activateWindow();
    pmtl->showFullScreen();
}

void Ptestset4::on_pushButton_5_clicked()
{
    PinstMulti *pmtl = new PinstMulti();
    pmtl->setVisible(true);
    pmtl->activateWindow();
    pmtl->showFullScreen();
}
