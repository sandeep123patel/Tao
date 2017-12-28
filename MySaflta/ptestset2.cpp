#include "ptestset2.h"
#include "ui_ptestset2.h"
#include "pinstructionmath.h"
#include "pinstmath2.h"
#include "pinstmulti.h"
PtestSet2::PtestSet2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestSet2)
{
    ui->setupUi(this);
}

PtestSet2::~PtestSet2()
{
    delete ui;
}

void PtestSet2::on_pushButton_2_clicked()
{
        PinstructionMath *pmth = new PinstructionMath();
        pmth->setVisible(true);
        pmth->activateWindow();
        pmth->showFullScreen();
}

void PtestSet2::on_pushButton_clicked()
{
    PinstMath2 *mth2 = new PinstMath2();
    mth2->setVisible(true);
    mth2->activateWindow();
    mth2->showFullScreen();
}

void PtestSet2::on_pushButton_4_clicked()
{
    PinstMulti *mint = new PinstMulti();
    mint->setVisible(true);
    mint->activateWindow();
    mint->showFullScreen();
}

void PtestSet2::on_pushButton_3_clicked()
{
    PinstMulti *mint = new PinstMulti();
    mint->setVisible(true);
    mint->activateWindow();
    mint->showFullScreen();
}

void PtestSet2::on_pushButton_5_clicked()
{
    PinstMulti *mint = new PinstMulti();
    mint->setVisible(true);
    mint->activateWindow();
    mint->showFullScreen();
}
