#ifndef INSTRUCTIONCOMPUTER_H
#define INSTRUCTIONCOMPUTER_H

#include <QMainWindow>

namespace Ui {
class InstructionComputer;
}

class InstructionComputer : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstructionComputer(QWidget *parent = 0);
    ~InstructionComputer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionComputer *ui;
};

#endif // INSTRUCTIONCOMPUTER_H
