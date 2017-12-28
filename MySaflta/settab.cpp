#include "settab.h"
#include "ui_settab.h"
#include "instructiongk.h"
#include "pinstgk2.h"
#include "pinstmulti.h"
SetTab::SetTab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetTab)
{
    ui->setupUi(this);
}

SetTab::~SetTab()
{
    delete ui;
}

void SetTab::on_pushButton_2_clicked()
{
    InstructionGk *isgk = new InstructionGk();
    isgk->setVisible(true);
    isgk->activateWindow();
    isgk->showFullScreen();
}

void SetTab::on_pushButton_clicked()
{
    PinstGk2 *pgk2 = new PinstGk2();
    pgk2->setVisible(true);
    pgk2->activateWindow();
    pgk2->showFullScreen();
}

void SetTab::on_pushButton_4_clicked()
{
    PinstMulti *mins = new PinstMulti();
    mins->setVisible(true);
    mins->activateWindow();
    mins->showFullScreen();
}

void SetTab::on_pushButton_3_clicked()
{
    PinstMulti *mins = new PinstMulti();
    mins->setVisible(true);
    mins->activateWindow();
    mins->showFullScreen();
}

void SetTab::on_pushButton_5_clicked()
{
    PinstMulti *mins = new PinstMulti();
    mins->setVisible(true);
    mins->activateWindow();
    mins->showFullScreen();
}
