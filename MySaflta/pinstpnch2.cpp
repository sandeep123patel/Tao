#include "pinstpnch2.h"
#include "ui_pinstpnch2.h"
#include "ppntchtest2.h"
PinstPnch2::PinstPnch2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstPnch2)
{
    ui->setupUi(this);
}

PinstPnch2::~PinstPnch2()
{
    delete ui;
}

void PinstPnch2::on_pushButton_clicked()
{
    PpntchTest2 *pnt2 = new PpntchTest2();
    pnt2->setVisible(true);
    pnt2->activateWindow();
    pnt2->showFullScreen();
    this->close();
}
