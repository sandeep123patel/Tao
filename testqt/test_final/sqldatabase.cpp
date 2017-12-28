#include "sqldatabase.h"
#include<QtSql/QSqlDatabase>

SqlDatabase :: SqlDatabase ( QObject * parent ) : QObject ( parent ) {
}

void SqlDatabase :: connectToDatabase ( QString &host, QString &database, QString &username, QString &password) {
    QSqlDatabase q_sqlDatabase = QSqlDatabase :: addDatabase ("QMYSQL");

    q_sqlDatabase.setHostName (host);
    q_sqlDatabase.setUserName (username);
    q_sqlDatabase.setPassword (password);
    q_sqlDatabase.setDatabaseName (database) ;
    if ( q_sqlDatabase.open()) {
        b_connected = "test";
        emit connectedChanged();

    }

    else {
        b_connected = "no";
        emit connectedChanged();
    }
}

bool SqlDatabase :: connected ( )  {
    return b_connected ;
}
