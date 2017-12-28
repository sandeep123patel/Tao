#include "page6.h"
#include "ui_page6.h"
#include "page7.h"
page6::page6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page6)
{
    ui->setupUi(this);
}

page6::~page6()
{
    delete ui;
}

void page6::on_pushButton_clicked()
{
    page7 pag7;
    pag7.setModal(true);
    pag7.exec();
}
