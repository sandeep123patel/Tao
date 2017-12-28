#include "pinstcom2.h"
#include "ui_pinstcom2.h"
#include "pconputertest2.h"
Pinstcom2::Pinstcom2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Pinstcom2)
{
    ui->setupUi(this);
}

Pinstcom2::~Pinstcom2()
{
    delete ui;
}

void Pinstcom2::on_pushButton_clicked()
{
    PconputerTest2 *pcom2 = new PconputerTest2();
    pcom2->setVisible(true);
    pcom2->activateWindow();
    pcom2->showFullScreen();
    this->close();
}
