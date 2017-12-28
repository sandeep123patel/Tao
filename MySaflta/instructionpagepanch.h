#ifndef INSTRUCTIONPAGEPANCH_H
#define INSTRUCTIONPAGEPANCH_H

#include <QMainWindow>

namespace Ui {
class InstructionpagePanch;
}

class InstructionpagePanch : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstructionpagePanch(QWidget *parent = 0);
    ~InstructionpagePanch();

private:
    Ui::InstructionpagePanch *ui;
};

#endif // INSTRUCTIONPAGEPANCH_H
