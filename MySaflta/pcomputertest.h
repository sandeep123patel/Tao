#ifndef PCOMPUTERTEST_H
#define PCOMPUTERTEST_H

#include <QMainWindow>

namespace Ui {
class PcomputerTest;
}

class PcomputerTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PcomputerTest(QWidget *parent = 0);
    ~PcomputerTest();

private:
    Ui::PcomputerTest *ui;
};

#endif // PCOMPUTERTEST_H
