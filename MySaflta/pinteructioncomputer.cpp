#include "pinteructioncomputer.h"
#include "ui_pinteructioncomputer.h"
#include "pcomputertest.h"
PinteructionComputer::PinteructionComputer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PinteructionComputer)
{
    ui->setupUi(this);
}

PinteructionComputer::~PinteructionComputer()
{
    delete ui;
}

void PinteructionComputer::on_pushButton_clicked()
{
    PcomputerTest *ptcom = new PcomputerTest();
    ptcom->setVisible(true);
    ptcom->activateWindow();
    ptcom->showFullScreen();
    this->close();
}
