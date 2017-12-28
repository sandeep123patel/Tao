#ifndef PINSTRUCTIONHINDI_H
#define PINSTRUCTIONHINDI_H

#include <QMainWindow>

namespace Ui {
class PinstructionHindi;
}

class PinstructionHindi : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstructionHindi(QWidget *parent = 0);
    ~PinstructionHindi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PinstructionHindi *ui;
};

#endif // PINSTRUCTIONHINDI_H
