#include "pinsthindi2.h"
#include "ui_pinsthindi2.h"
#include "phinditest2.h"
PinstHindi2::PinstHindi2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinstHindi2)
{
    ui->setupUi(this);
}

PinstHindi2::~PinstHindi2()
{
    delete ui;
}

void PinstHindi2::on_pushButton_clicked()
{
    PhindiTest2 *phnd2 = new PhindiTest2();
    phnd2->setVisible(true);
    phnd2->activateWindow();
    phnd2->showFullScreen();
    this->close();
}
