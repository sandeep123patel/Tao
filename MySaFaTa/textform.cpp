#include "textform.h"
#include "ui_textform.h"
#include "gktest.h"
#include "tankyou.h"
#include "tankyoumath.h"
#include <QApplication>
#include "thankyoureasoning.h"
#include "thankyouenglish.h"
#include "thankyoucomputer.h"
Textform::Textform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Textform)

{

    ui->setupUi(this);

        this->setStyleSheet("background-color: white");
}

Textform::~Textform()
{
    delete ui;
}

void Textform::on_pushButton_5_clicked()
{
Tankyou than;
than.setModal(true);
than.exec();

}


void Textform::on_pushButton_4_clicked()
{
    Tankyoumath than;
    than.setModal(true);
    than.exec();

}

void Textform::on_pushButton_2_clicked()
{
    Thankyoureasoning thanrea;
    thanrea.setModal(true);
    thanrea.exec();
}

void Textform::on_pushButton_3_clicked()
{
    thankyouenglish thaneng;
    thaneng.setModal(true);
    thaneng.exec();
}

void Textform::on_pushButton_clicked()
{
    Thankyoucomputer thancom;
    thancom.setModal(true);
    thancom.exec();
}
