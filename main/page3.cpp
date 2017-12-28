#include "page3.h"
#include "ui_page3.h"
#include "page4.h"
page3::page3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page3)
{
    ui->setupUi(this);
}

page3::~page3()
{
    delete ui;
}

void page3::on_pushButton_clicked()
{
    page4 pag4;
    pag4.setModal(true);
    pag4.exec();
}
