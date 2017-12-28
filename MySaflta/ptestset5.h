#ifndef PTESTSET5_H
#define PTESTSET5_H

#include <QMainWindow>

namespace Ui {
class PtestSet5;
}

class PtestSet5 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestSet5(QWidget *parent = 0);
    ~PtestSet5();

private:
    Ui::PtestSet5 *ui;
};

#endif // PTESTSET5_H
