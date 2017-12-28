#ifndef PHINDITEST_H
#define PHINDITEST_H

#include <QMainWindow>

namespace Ui {
class PhindiTest;
}

class PhindiTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhindiTest(QWidget *parent = 0);
    ~PhindiTest();

private:
    Ui::PhindiTest *ui;
};

#endif // PHINDITEST_H
