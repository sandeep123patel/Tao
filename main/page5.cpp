#include "page5.h"
#include "ui_page5.h"
#include "page6.h"
page5::page5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page5)
{
    ui->setupUi(this);
}

page5::~page5()
{
    delete ui;
}

void page5::on_pushButton_clicked()
{
   page6 pag6;
   pag6.setModal(true);
   pag6.exec();
}
