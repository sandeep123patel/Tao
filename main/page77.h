#ifndef PAGE77_H
#define PAGE77_H

#include <QDialog>

namespace Ui {
class page77;
}

class page77 : public QDialog
{
    Q_OBJECT

public:
    explicit page77(QWidget *parent = 0);
    ~page77();

private:
    Ui::page77 *ui;
};

#endif // PAGE77_H
