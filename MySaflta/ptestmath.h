#ifndef PTESTMATH_H
#define PTESTMATH_H

#include <QMainWindow>

namespace Ui {
class PtestMath;
}

class PtestMath : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestMath(QWidget *parent = 0);
    ~PtestMath();

private:
    Ui::PtestMath *ui;
};

#endif // PTESTMATH_H
