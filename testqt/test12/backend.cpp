#include "backend.h"
#include <QSql>
#include <QSqlDatabase>
BackEnd::BackEnd( QObject * parent) : QObject(parent) {
   b_connected = false;
}

void BackEnd :: connectToDatabase( QString hostname="ao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com", QString databasename="interviewfight_tao_data2", QString username="robodia", QString password="robodia123")
{
            QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
            db.setHostName(hostname);
            db.setUserName(username);
            db.setPassword(password);
            db.setDatabaseName(databasename);

       if(db.open()){
           b_connected = true;
       }
}



