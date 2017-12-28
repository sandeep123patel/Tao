#define SQLDATABASE_H
#include <QObject>
#include<QString>
class SqlDatabase : public QObject {
    Q_OBJECT

    Q_PROPERTY ( bool connected READ connected NOTIFY connectedChanged )

public:
     explicit SqlDatabase ( QObject * parent = 0 );

     bool connected() ;
     void connectToDatabase(QString &host, QString &database, QString &username, QString &password);

private:
    bool b_connected;

signals:
    void connectedChanged ();

};
