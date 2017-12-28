#ifndef INSTRUCTIONGK_H
#define INSTRUCTIONGK_H

#include <QMainWindow>

namespace Ui {
class InstructionGk;
}

class InstructionGk : public QMainWindow
{
    Q_OBJECT

public:
    explicit InstructionGk(QWidget *parent = 0);
    ~InstructionGk();

private slots:
    void on_pushButton_clicked();

private:
    Ui::InstructionGk *ui;
};

#endif // INSTRUCTIONGK_H
