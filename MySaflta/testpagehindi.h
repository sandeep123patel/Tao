#ifndef TESTPAGEHINDI_H
#define TESTPAGEHINDI_H

#include <QMainWindow>

namespace Ui {
class TestpageHindi;
}

class TestpageHindi : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpageHindi(QWidget *parent = 0);
    ~TestpageHindi();

private:
    Ui::TestpageHindi *ui;
};

#endif // TESTPAGEHINDI_H
