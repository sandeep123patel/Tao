#ifndef INTSTRUCTIONHINDI_H
#define INTSTRUCTIONHINDI_H

#include <QMainWindow>

namespace Ui {
class IntstructionHindi;
}

class IntstructionHindi : public QMainWindow
{
    Q_OBJECT

public:
    explicit IntstructionHindi(QWidget *parent = 0);
    ~IntstructionHindi();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IntstructionHindi *ui;
};

#endif // INTSTRUCTIONHINDI_H
