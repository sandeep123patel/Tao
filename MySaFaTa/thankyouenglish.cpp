#include "thankyouenglish.h"
#include "ui_thankyouenglish.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "testgk.h"
thankyouenglish::thankyouenglish(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::thankyouenglish)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("interviewfight_tao_data2");
    if(db.open()){
        for (int i=1;i<9;i=i+1){
            QSqlQuery qry;

            qry.prepare("SELECT Questions,A,B,C,D,Answer,Discription FROM app WHERE id=:id_u");
            qry.bindValue(":id_u",i);
            qry.exec();
            while(qry.next()){
            QString ques = qry.value(0).toString();
            QString a = qry.value(1).toString();
            QString b = qry.value(2).toString();
            QString c = qry.value(3).toString();
            QString d = qry.value(4).toString();
            QString ans_qu= qry.value(5).toString();
            QString dis = qry.value(6).toString();
            qDebug() << ques << a << b << c << d<< ans_qu << dis;

             testgk pag;
            pag.findChild<QTextBrowser*>("sandeep")->setText(ques);
            pag.findChild<QLabel*>("A")->setText(a);
            pag.findChild<QLabel*>("B")->setText(b);
            pag.findChild<QLabel*>("C")->setText(c);
            pag.findChild<QLabel*>("D")->setText(d);
            pag.findChild<QLabel*>("na")->setText(ans_qu);
            pag.findChild<QLabel*>("yes")->setText(dis);
            pag.setModal(true);
            pag.exec();
        }
        }

    }
    else {
        QMessageBox::warning(this,"Waring","Please check you Internet connect");

    }
}

thankyouenglish::~thankyouenglish()
{
    delete ui;
}

void thankyouenglish::on_pushButton_clicked()
{
    this->close();
}
