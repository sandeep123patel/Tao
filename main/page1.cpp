#include "page1.h"
#include "ui_page1.h"
#include "page2.h"
page1::page1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page1)
{
    ui->setupUi(this);
}

page1::~page1()
{
    delete ui;
}

void page1::on_pushButton_clicked()
{
    page2 pag2;
    pag2.setModal(true);
    pag2.exec();
}
