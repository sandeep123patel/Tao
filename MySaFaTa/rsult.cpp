#include "rsult.h"
#include "ui_rsult.h"

rsult::rsult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rsult)
{
    ui->setupUi(this);
}

rsult::~rsult()
{
    delete ui;
}
