#ifndef PINSTGK2_H
#define PINSTGK2_H

#include <QMainWindow>

namespace Ui {
class PinstGk2;
}

class PinstGk2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstGk2(QWidget *parent = 0);
    ~PinstGk2();

private:
    Ui::PinstGk2 *ui;
};

#endif // PINSTGK2_H
