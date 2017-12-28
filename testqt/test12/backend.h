#ifndef BACKEND_H
#define BACKEND_H
#include <QObject>
#include <QtSql/QSqlDatabase>

class BackEnd : public QObject
{
    Q_OBJECT

    Q_PROPERTY(bool connected READ connected NOTIFY connectedChanged)

public:
    BackEnd( QObject *parent = 0);

    bool connected ( );
    void connectToDatabase (QString hostname, QString databasename, QString username, QString password);

private:
    bool b_connected;

signals:
    void connectedChanged ( );
};

#endif // BACKEND_H
