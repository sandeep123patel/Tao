#ifndef PTESTMATH2_H
#define PTESTMATH2_H

#include <QMainWindow>

namespace Ui {
class PtestMath2;
}

class PtestMath2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestMath2(QWidget *parent = 0);
    ~PtestMath2();

private:
    Ui::PtestMath2 *ui;
};

#endif // PTESTMATH2_H
