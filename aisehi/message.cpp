#include "message.h"
#include <iostream>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
using std::cout;
using std::endl;

Message::Message(QObject *parent) : QObject(parent),
    m_counter(0),
    m_message("starting message"),
    a_opt("dcdcdc")
{

}

void Message::doMessageChange()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("interviewfight_tao_data2");
    if (db.open()){
       m_message = "xsxsx";
       emit messageChange(m_message);
       emit aoptChange(a_opt.arg(m_counter));
    }
    else {

    }

    //cout << "we are in c++.. hooray!" << endl;
   ++m_counter;

}
// void Message::setMessage(QString value)
// {
//     m_message = value.arg(++m_counter);
//     emit messageChange();
// }
