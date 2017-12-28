#include "ptestform.h"
#include "ui_ptestform.h"
#include "instructiongk.h"
#include "pinstructionmath.h"
#include "pinstructionhindi.h"
#include "pinteructioncomputer.h"
#include "pinstructionptnch.h"
#include "settab.h"
#include "ptestset2.h"
#include "ptestset3.h"
#include "ptestset4.h"
#include "ptestset5.h"
Ptestform::Ptestform(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestform)
{
    ui->setupUi(this);
}

Ptestform::~Ptestform()
{
    delete ui;
}

void Ptestform::on_pushButton_5_clicked()
{
//    InstructionGk *pigk = new InstructionGk();
//    pigk->setVisible(true);
//    pigk->activateWindow();
//    pigk->showFullScreen();
    SetTab *sett = new SetTab();
    sett->setVisible(true);
    sett->activateWindow();
    sett->showFullScreen();
}

void Ptestform::on_pushButton_clicked()
{
//    PinstructionMath *pmth = new PinstructionMath();
//    pmth->setVisible(true);
//    pmth->activateWindow();
//    pmth->showFullScreen();
    PtestSet2 *pst2 = new PtestSet2();
    pst2->setVisible(true);
    pst2->activateWindow();
    pst2->showFullScreen();

}

void Ptestform::on_pushButton_4_clicked()
{
//    PinstructionHindi *pthd = new PinstructionHindi();
//    pthd->setVisible(true);
//    pthd->activateWindow();
//    pthd->showFullScreen();

    Ptestset3 *pth3 = new Ptestset3();
    pth3->setVisible(true);
    pth3->activateWindow();
    pth3->showFullScreen();
}

void Ptestform::on_pushButton_2_clicked()
{
//    PinteructionComputer *ptcom = new PinteructionComputer();
//    ptcom->setVisible(true);
//    ptcom->activateWindow();
//    ptcom->showFullScreen();
    PtestSet5 *ptst5 = new PtestSet5();
    ptst5->setVisible(true);
    ptst5->activateWindow();
    ptst5->showFullScreen();
}

void Ptestform::on_pushButton_3_clicked()
{
//    PinstructionPtnch *pipnch = new PinstructionPtnch();
//    pipnch->setVisible(true);
//    pipnch->activateWindow();
//    pipnch->showFullScreen();
    Ptestset4 *pts4 = new Ptestset4();
    pts4->setVisible(true);
    pts4->activateWindow();
    pts4->showFullScreen();
}
