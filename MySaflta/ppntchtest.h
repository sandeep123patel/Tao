#ifndef PPNTCHTEST_H
#define PPNTCHTEST_H

#include <QMainWindow>

namespace Ui {
class PpntchTest;
}

class PpntchTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PpntchTest(QWidget *parent = 0);
    ~PpntchTest();

private:
    Ui::PpntchTest *ui;
};

#endif // PPNTCHTEST_H
