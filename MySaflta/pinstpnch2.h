#ifndef PINSTPNCH2_H
#define PINSTPNCH2_H

#include <QMainWindow>

namespace Ui {
class PinstPnch2;
}

class PinstPnch2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstPnch2(QWidget *parent = 0);
    ~PinstPnch2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PinstPnch2 *ui;
};

#endif // PINSTPNCH2_H
