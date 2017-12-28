#ifndef TESTCURRENT_H
#define TESTCURRENT_H

#include <QMainWindow>

namespace Ui {
class TestCurrent;
}

class TestCurrent : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestCurrent(QWidget *parent = 0);
    ~TestCurrent();

private:
    Ui::TestCurrent *ui;
};

#endif // TESTCURRENT_H
