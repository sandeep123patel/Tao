#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QString>
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

private:
    int m_counter;
    QString m_message;
    QString a_opt;
    explicit Message(const Message& rhs) = delete;
    Message& operator=(const Message& rhs) = delete;

};

#endif // MESSAGE_H
