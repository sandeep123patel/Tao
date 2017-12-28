#ifndef TESTPAGEMATH_H
#define TESTPAGEMATH_H

#include <QMainWindow>

namespace Ui {
class Testpagemath;
}

class Testpagemath : public QMainWindow
{
    Q_OBJECT

public:
    explicit Testpagemath(QWidget *parent = 0);
    ~Testpagemath();

private:
    Ui::Testpagemath *ui;
};

#endif // TESTPAGEMATH_H
