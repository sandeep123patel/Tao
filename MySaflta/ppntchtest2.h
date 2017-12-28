#ifndef PPNTCHTEST2_H
#define PPNTCHTEST2_H

#include <QMainWindow>

namespace Ui {
class PpntchTest2;
}

class PpntchTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PpntchTest2(QWidget *parent = 0);
    ~PpntchTest2();

private:
    Ui::PpntchTest2 *ui;
};

#endif // PPNTCHTEST2_H
