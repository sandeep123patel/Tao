#ifndef TESTMATH_H
#define TESTMATH_H

#include <QDialog>

namespace Ui {
class Testmath;
}

class Testmath : public QDialog
{
    Q_OBJECT

public:
    explicit Testmath(QWidget *parent = 0);
    ~Testmath();

private:
    Ui::Testmath *ui;
};

#endif // TESTMATH_H
