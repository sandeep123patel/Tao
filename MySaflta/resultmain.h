#ifndef RESULTMAIN_H
#define RESULTMAIN_H

#include <QDialog>

namespace Ui {
class Resultmain;
}

class Resultmain : public QDialog
{
    Q_OBJECT

public:
    explicit Resultmain(QWidget *parent = 0);
    ~Resultmain();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Resultmain *ui;
};

#endif // RESULTMAIN_H
