#include "testgk.h"
#include "ui_testgk.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include "rsult.h"
#include <QMessageBox>
testgk::testgk(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testgk)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");

}

testgk::~testgk()
{
    delete ui;
}

void testgk::on_pushButton_clicked()
{
    this->close();
}

void testgk::on_radioButton_clicked()
{

    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
    QMessageBox::question(this,"Congo","Good Job keep imporving");
    rsult t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->A->setStyleSheet("color:red");
           rsult t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void testgk::on_radioButton_2_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
    QMessageBox::question(this,"Congo","Good Job keep imporving");
    rsult t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->A->setStyleSheet("color:red");
           rsult t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void testgk::on_radioButton_3_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
    QMessageBox::question(this,"Congo","Good Job keep imporving");
    rsult t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->A->setStyleSheet("color:red");
           rsult t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}

void testgk::on_radioButton_4_clicked()
{
    QString s,y;
    s = ui->na->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
    QMessageBox::question(this,"Congo","Good Job keep imporving");
    rsult t;
    t.findChild<QLabel*>("sss")->setText(s);
    t.findChild<QTextBrowser*>("yyy")->setText(y);
    t.setModal(true);
    t.exec();


    }
    else {
           ui->A->setStyleSheet("color:red");
           rsult t;
           t.findChild<QLabel*>("sss")->setText(s);
           t.findChild<QTextBrowser*>("yyy")->setText(y);
           t.setModal(true);
           t.exec();
    }
}
