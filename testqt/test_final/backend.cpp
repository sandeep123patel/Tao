#include "backend.h"

#include <QSql>
#include<QSqlDatabase>
BackEnd::BackEnd(QObject *parent) : QObject(parent)
{

}

QString BackEnd::connected(){
    return b_connected;
}

void BackEnd::connectToDatabase(QString &host, QString &database, QString &username, QString &password){
    QSqlDatabase q_sqlDatabase = QSqlDatabase :: addDatabase ("QMYSQL");

    q_sqlDatabase.setHostName (host);
    q_sqlDatabase.setUserName (username);
    q_sqlDatabase.setPassword (password);
    q_sqlDatabase.setDatabaseName (database) ;
    if ( q_sqlDatabase.open()) {
        b_connected = "tess";
        emit connectedChanged();

    }

    else {
        b_connected = "noo";
        emit connectedChanged();
    }

}

