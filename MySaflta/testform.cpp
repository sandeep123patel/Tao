#include "testform.h"
#include "ui_testform.h"
#include "thankyougk.h"
#include "instructionmath.h"
#include "intstructionhindi.h"
#include "instructioncomputer.h"
#include "instructionpagepanch.h"
#include "instructioncurrent.h"
TestForm::TestForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestForm)
{
    ui->setupUi(this);
}

TestForm::~TestForm()
{
    delete ui;
}

void TestForm::on_pushButton_5_clicked()
{
    Thankyougk *thgk = new Thankyougk();
    thgk->setVisible(true);
    thgk->activateWindow();
    thgk->showFullScreen();

}

void TestForm::on_pushButton_clicked()
{
    InstructionMath *thgk = new InstructionMath();
    thgk->setVisible(true);
    thgk->activateWindow();
    thgk->showFullScreen();
}

void TestForm::on_pushButton_4_clicked()
{
    IntstructionHindi *thnd = new IntstructionHindi();
    thnd->setVisible(true);
    thnd->activateWindow();
    thnd->showFullScreen();
}

void TestForm::on_pushButton_2_clicked()
{
    InstructionComputer *tcom = new InstructionComputer();
    tcom->setVisible(true);
    tcom->activateWindow();
    tcom->showFullScreen();
}

void TestForm::on_pushButton_3_clicked()
{
    InstructionpagePanch *ipach = new InstructionpagePanch();
    ipach->setVisible(true);
    ipach->activateWindow();
    ipach->showFullScreen();
}

void TestForm::on_pushButton_6_clicked()
{
    InstructionCurrent *currn = new InstructionCurrent();
    currn->setVisible(true);
    currn->activateWindow();
    currn->showFullScreen();
}
