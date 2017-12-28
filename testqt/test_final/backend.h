#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include<QString>

class BackEnd :public QObject {
            Q_OBJECT

            Q_PROPERTY ( QString connected READ connected NOTIFY connectedChanged )

        public:
             explicit BackEnd ( QObject * parent = 0 );

          QString connected() ;
             void connectToDatabase(QString &host, QString &database, QString &username, QString &password);

        private:
            QString b_connected;

        signals:
            void connectedChanged ();

        };

#endif // BACKEND_H
