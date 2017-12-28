#ifndef PAGE31_H
#define PAGE31_H

#include <QDialog>

namespace Ui {
class page31;
}

class page31 : public QDialog
{
    Q_OBJECT

public:
    explicit page31(QWidget *parent = 0);
    ~page31();

private:
    Ui::page31 *ui;
};

#endif // PAGE31_H
