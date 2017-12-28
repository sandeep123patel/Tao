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

private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionpagePanch *ui;
};

#endif // INSTRUCTIONPAGEPANCH_H
