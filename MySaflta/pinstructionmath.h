#ifndef PINSTRUCTIONMATH_H
#define PINSTRUCTIONMATH_H

#include <QMainWindow>

namespace Ui {
class PinstructionMath;
}

class PinstructionMath : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstructionMath(QWidget *parent = 0);
    ~PinstructionMath();

private:
    Ui::PinstructionMath *ui;
};

#endif // PINSTRUCTIONMATH_H
