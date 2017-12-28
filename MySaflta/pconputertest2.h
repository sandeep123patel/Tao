#ifndef PCONPUTERTEST2_H
#define PCONPUTERTEST2_H

#include <QMainWindow>

namespace Ui {
class PconputerTest2;
}

class PconputerTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PconputerTest2(QWidget *parent = 0);
    ~PconputerTest2();

private:
    Ui::PconputerTest2 *ui;
};

#endif // PCONPUTERTEST2_H
