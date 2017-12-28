#ifndef PAGE12_H
#define PAGE12_H

#include <QDialog>

namespace Ui {
class page12;
}

class page12 : public QDialog
{
    Q_OBJECT

public:
    explicit page12(QWidget *parent = 0);
    ~page12();

private:
    Ui::page12 *ui;
};

#endif // PAGE12_H
