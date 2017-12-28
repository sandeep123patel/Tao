#ifndef PAGE75_H
#define PAGE75_H

#include <QDialog>

namespace Ui {
class page75;
}

class page75 : public QDialog
{
    Q_OBJECT

public:
    explicit page75(QWidget *parent = 0);
    ~page75();

private:
    Ui::page75 *ui;
};

#endif // PAGE75_H
