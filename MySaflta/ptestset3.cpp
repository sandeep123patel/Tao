#include "ptestset3.h"
#include "ui_ptestset3.h"
#include "pinstructionhindi.h"
#include "pinsthindi2.h"
#include "pinstmulti.h"
Ptestset3::Ptestset3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ptestset3)
{
    ui->setupUi(this);
}

Ptestset3::~Ptestset3()
{
    delete ui;
}

void Ptestset3::on_pushButton_2_clicked()
{
        PinstructionHindi *pthd = new PinstructionHindi();
        pthd->setVisible(true);
        pthd->activateWindow();
        pthd->showFullScreen();
}

void Ptestset3::on_pushButton_clicked()
{
    PinstHindi2 *pinth2 = new PinstHindi2();
    pinth2->setVisible(true);
    pinth2->activateWindow();
    pinth2->showFullScreen();
}

void Ptestset3::on_pushButton_4_clicked()
{
    PinstMulti *pmlt = new PinstMulti();
    pmlt->setVisible(true);
    pmlt->activateWindow();
    pmlt->showFullScreen();
}

void Ptestset3::on_pushButton_3_clicked()
{
    PinstMulti *pmlt = new PinstMulti();
    pmlt->setVisible(true);
    pmlt->activateWindow();
    pmlt->showFullScreen();
}

void Ptestset3::on_pushButton_5_clicked()
{
    PinstMulti *pmlt = new PinstMulti();
    pmlt->setVisible(true);
    pmlt->activateWindow();
    pmlt->showFullScreen();
}
