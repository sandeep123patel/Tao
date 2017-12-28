#ifndef INSTRUCTIONCURRENT_H
#define INSTRUCTIONCURRENT_H

#include <QMainWindow>

namespace Ui {
class InstructionCurrent;
}

class InstructionCurrent : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstructionCurrent(QWidget *parent = 0);
    ~InstructionCurrent();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionCurrent *ui;
};

#endif // INSTRUCTIONCURRENT_H
