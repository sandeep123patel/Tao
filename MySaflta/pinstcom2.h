#ifndef PINSTCOM2_H
#define PINSTCOM2_H

#include <QMainWindow>

namespace Ui {
class Pinstcom2;
}

class Pinstcom2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pinstcom2(QWidget *parent = 0);
    ~Pinstcom2();

private:
    Ui::Pinstcom2 *ui;
};

#endif // PINSTCOM2_H
