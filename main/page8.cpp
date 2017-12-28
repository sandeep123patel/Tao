#include "page8.h"
#include "ui_page8.h"
#include "page9.h"
page8::page8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page8)
{
    ui->setupUi(this);
}

page8::~page8()
{
    delete ui;
}

void page8::on_pushButton_clicked()
{
    page9 pag9;
    pag9.setModal(true);
    pag9.exec();
}
