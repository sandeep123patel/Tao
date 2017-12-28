#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QString>

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QVariant>
class Message : public QObject
{
    Q_OBJECT
public:
    explicit Message(QObject *parent = nullptr);

public slots:
    void doMessageChange();

signals:
    void messageChange(QString value);
    void aoptChange(QString value1);
    void boptChange(QString value2);
    void coptChange(QString value3);
    void doptChange(QString value4);
    void eoptChange(QString value5);
    void foptChange(QString value6);

private:
    int m_counter;
    QString m_message;
    QString a_opt;
    QString b_opt;
    QString c_opt;
    QString d_opt;
    QString e_opt;
    QString f_opt;
    explicit Message(const Message& rhs) = delete;
    Message& operator =(const Message& rhs) = delete;

};

#endif // MESSAGE_H
