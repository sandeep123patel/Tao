#ifndef PHINDITEST2_H
#define PHINDITEST2_H

#include <QMainWindow>

namespace Ui {
class PhindiTest2;
}

class PhindiTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhindiTest2(QWidget *parent = 0);
    ~PhindiTest2();

private:
    Ui::PhindiTest2 *ui;
};

#endif // PHINDITEST2_H
