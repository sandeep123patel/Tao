#ifndef PINSTRUCTIONPTNCH_H
#define PINSTRUCTIONPTNCH_H

#include <QMainWindow>

namespace Ui {
class PinstructionPtnch;
}

class PinstructionPtnch : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstructionPtnch(QWidget *parent = 0);
    ~PinstructionPtnch();

private:
    Ui::PinstructionPtnch *ui;
};

#endif // PINSTRUCTIONPTNCH_H
