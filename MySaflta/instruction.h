#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <QMainWindow>

namespace Ui {
class Instruction;
}

class Instruction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Instruction(QWidget *parent = 0);
    ~Instruction();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Instruction *ui;
};

#endif // INSTRUCTION_H
