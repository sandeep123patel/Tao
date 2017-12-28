#include "message.h"
#include<iostream>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>
#include <QDebug>
using std::cout;
using std::endl;

Message::Message(QObject *parent) : QObject(parent),
    m_counter(1),
    r_counter(1),
  m_message("sandeee %1"),
  a_opt("database"),
  b_opt(""),
  c_opt(""),
  d_opt(""),
  e_opt(""),
  f_opt("")
{

}

void Message::doMessageChange()

{
    //cout << "c++ is have "<<endl;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("interviewfight_tao_data2");
    if (db.open()){

        if (m_counter<22){



        QSqlDatabase db = QSqlDatabase::database();

        QSqlQuery qry;
        qry.prepare("SELECT Questions,A,B,C,D,Answer,Discription FROM app WHERE id=:id_u");
        qry.bindValue(":id_u",m_counter);
        qry.exec();
        while (qry.next()) {

            QString ques = qry.value(0).toString();
            QString a = qry.value(1).toString();
            QString b = qry.value(2).toString();
            QString c = qry.value(3).toString();
            QString d = qry.value(4).toString();
            QString e = qry.value(5).toString();
            QString f = qry.value(6).toString();
            emit messageChange(ques);
            emit aoptChange(a);
            emit boptChange(b);
            emit coptChange(c);
            emit doptChange(d);
            emit eoptChange(e);
           qDebug()<< ques << a << b << c << d << e << f;
        }

        }

        else {
            m_message = "Thank you for tking text";
            emit messageChange(m_message);
        }


    }

    else {
        emit messageChange("no");
    }
    ++m_counter;
    //emit messageChange(m_message.arg(m_counter));
}

void Message::doRessageChange()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("interviewfight_tao_data2");
    if (db.open()){

        if (r_counter<22){



        QSqlDatabase db = QSqlDatabase::database();

        QSqlQuery qry;
        qry.prepare("SELECT Questions,A,B,C,D,Answer,Discription FROM app WHERE id=:id_u");
        qry.bindValue(":id_u",r_counter);
        qry.exec();
        while (qry.next()) {

            QString ques = qry.value(0).toString();
            QString a = qry.value(1).toString();
            QString b = qry.value(2).toString();
            QString c = qry.value(3).toString();
            QString d = qry.value(4).toString();
            QString e = qry.value(5).toString();
            QString f = qry.value(6).toString();

            emit eoptChange(e);
            emit foptChange(f);
           qDebug()<< ques << a << b << c << d << e << f;
        }

        }

        else {
            m_message = "Thank you for tking text";
            emit messageChange(m_message);
        }


    }

    else {
        emit messageChange("no");
    }
    ++r_counter;
    //emit messageChange(m_message.arg(m_counter));
}
