#include "rsult.h"
#include "ui_rsult.h"

rsult::rsult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rsult)
{
    ui->setupUi(this);
         this->setStyleSheet("background-color: white");

}

rsult::~rsult()
{
    delete ui;
}

void rsult::on_pushButton_clicked()
{
    this->close();
}
