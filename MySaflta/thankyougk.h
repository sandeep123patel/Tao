#ifndef THANKYOUGK_H
#define THANKYOUGK_H

#include <QMainWindow>
#include <QString>
#include <QDialog>
#include <QWidget>
#include <QObject>
namespace Ui {
class Thankyougk;
}

class Thankyougk : public QMainWindow
{
    Q_OBJECT

public:
    explicit Thankyougk(QWidget *parent = 0);
    ~Thankyougk();
public slots :
    void messageChange();
signals :
      void domessange(QString value);
private slots:
      void on_pushButton_clicked();

private:
    QString m_message;
    int m_count;
    Ui::Thankyougk *ui;
};

#endif // THANKYOUGK_H
