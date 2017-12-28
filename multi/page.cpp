#include "page.h"
#include "ui_page.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QMessageBox>
#include "trial.h"
page::page(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::page)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");



}

page::~page()
{
    delete ui;
}



void page::on_pushButton_clicked()
{
    this->close();
}

void page::on_radioButton_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
    QMessageBox::question(this,"nhis",s);
    trial t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->A->setStyleSheet("color:red");
           trial t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void page::on_radioButton_2_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("B" == s){
     ui->B->setStyleSheet("color:green");
    QMessageBox::question(this,"nhis",s);
    trial t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->B->setStyleSheet("color:red");
           trial t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void page::on_radioButton_3_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("C" == s){
     ui->C->setStyleSheet("color:green");
    QMessageBox::question(this,"nhis",s);
    trial t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->C->setStyleSheet("color:red");
           trial t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void page::on_radioButton_4_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("D" == s){
     ui->D->setStyleSheet("color:green");
    QMessageBox::question(this,"nhis",s);
    trial t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->D->setStyleSheet("color:red");
           trial t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}
