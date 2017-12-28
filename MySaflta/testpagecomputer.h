#ifndef TESTPAGECOMPUTER_H
#define TESTPAGECOMPUTER_H

#include <QMainWindow>

namespace Ui {
class TestpageComputer;
}

class TestpageComputer : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpageComputer(QWidget *parent = 0);
    ~TestpageComputer();

private:
    Ui::TestpageComputer *ui;
};

#endif // TESTPAGECOMPUTER_H
