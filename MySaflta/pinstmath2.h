#ifndef PINSTMATH2_H
#define PINSTMATH2_H

#include <QMainWindow>

namespace Ui {
class PinstMath2;
}

class PinstMath2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstMath2(QWidget *parent = 0);
    ~PinstMath2();

private:
    Ui::PinstMath2 *ui;
};

#endif // PINSTMATH2_H
