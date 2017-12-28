#include "ptestset5.h"
#include "ui_ptestset5.h"
#include "pinteructioncomputer.h"
#include "pinstcom2.h"
#include "pinstmulti.h"
PtestSet5::PtestSet5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestSet5)
{
    ui->setupUi(this);
}

PtestSet5::~PtestSet5()
{
    delete ui;
}

void PtestSet5::on_pushButton_2_clicked()
{
        PinteructionComputer *ptcom = new PinteructionComputer();
        ptcom->setVisible(true);
        ptcom->activateWindow();
        ptcom->showFullScreen();
}

void PtestSet5::on_pushButton_clicked()
{
    Pinstcom2 *pcon2 = new Pinstcom2();
    pcon2->setVisible(true);
    pcon2->activateWindow();
    pcon2->showFullScreen();
}

void PtestSet5::on_pushButton_4_clicked()
{
    PinstMulti *pinm = new PinstMulti();
    pinm->setVisible(true);
    pinm->activateWindow();
    pinm->showFullScreen();
}

void PtestSet5::on_pushButton_3_clicked()
{
    PinstMulti *pinm = new PinstMulti();
    pinm->setVisible(true);
    pinm->activateWindow();
    pinm->showFullScreen();
}

void PtestSet5::on_pushButton_5_clicked()
{
    PinstMulti *pinm = new PinstMulti();
    pinm->setVisible(true);
    pinm->activateWindow();
    pinm->showFullScreen();
}
