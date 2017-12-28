#include "ptestpage.h"
#include "ui_ptestpage.h"
#include"ptestgk.h"
#include "ptestmath.h"
#include "ptesthindi.h"
#include "ptestreasoning.h"
#include "ptestcomputer.h"
Ptestpage::Ptestpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Ptestpage)
{
    ui->setupUi(this);
}

Ptestpage::~Ptestpage()
{
    delete ui;
}

void Ptestpage::on_pushButton_5_clicked()
{
    ptestgk pgk;
    pgk.setModal(true);
    pgk.exec();
}

void Ptestpage::on_pushButton_4_clicked()
{
    ptestmath pmth;
    pmth.setModal(true);
    pmth.exec();
}

void Ptestpage::on_pushButton_3_clicked()
{
    ptesthindi phnd;
    phnd.setModal(true);
    phnd.exec();
}

void Ptestpage::on_pushButton_2_clicked()
{
    ptestreasoning pras;
    pras.setModal(true);
    pras.exec();
}

void Ptestpage::on_pushButton_clicked()
{
    ptestcomputer pcom;
    pcom.setModal(true);
    pcom.exec();
}
