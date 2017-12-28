#include "page2.h"
#include "ui_page2.h"
#include "page3.h"
page2::page2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page2)
{
    ui->setupUi(this);
}

page2::~page2()
{
    delete ui;
}

void page2::on_pushButton_clicked()
{
    page3 pag3;
    pag3.setModal(true);
    pag3.exec();
}
