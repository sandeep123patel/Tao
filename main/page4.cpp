#include "page4.h"
#include "ui_page4.h"
#include "page5.h"
page4::page4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page4)
{
    ui->setupUi(this);
}

page4::~page4()
{
    delete ui;
}

void page4::on_pushButton_clicked()
{
    page5 pag5;
    pag5.setModal(true);
    pag5.exec();
}
