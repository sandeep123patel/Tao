#ifndef PTESTGK2_H
#define PTESTGK2_H

#include <QMainWindow>

namespace Ui {
class PtestGk2;
}

class PtestGk2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestGk2(QWidget *parent = 0);
    ~PtestGk2();

private:
    Ui::PtestGk2 *ui;
};

#endif // PTESTGK2_H
