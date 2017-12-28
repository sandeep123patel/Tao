#ifndef PAGE23_H
#define PAGE23_H

#include <QDialog>

namespace Ui {
class page23;
}

class page23 : public QDialog
{
    Q_OBJECT

public:
    explicit page23(QWidget *parent = 0);
    ~page23();

private:
    Ui::page23 *ui;
};

#endif // PAGE23_H
