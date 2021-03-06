#ifndef INSTRUCTIONMATH_H
#define INSTRUCTIONMATH_H

#include <QMainWindow>

namespace Ui {
class InstructionMath;
}

class InstructionMath : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstructionMath(QWidget *parent = 0);
    ~InstructionMath();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionMath *ui;
};

#endif // INSTRUCTIONMATH_H
