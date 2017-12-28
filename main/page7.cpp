#include "page7.h"
#include "ui_page7.h"
#include "page8.h"
page7::page7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page7)
{
    ui->setupUi(this);
}

page7::~page7()
{
    delete ui;
}

void page7::on_pushButton_clicked()
{
    page8 pag8;
    pag8.setModal(true);
    pag8.exec();
}
