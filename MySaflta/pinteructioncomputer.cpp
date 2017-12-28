#include "pinteructioncomputer.h"
#include "ui_pinteructioncomputer.h"

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
