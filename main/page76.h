#ifndef PAGE76_H
#define PAGE76_H

#include <QDialog>

namespace Ui {
class page76;
}

class page76 : public QDialog
{
    Q_OBJECT

public:
    explicit page76(QWidget *parent = 0);
    ~page76();

private:
    Ui::page76 *ui;
};

#endif // PAGE76_H
