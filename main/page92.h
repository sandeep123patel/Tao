#ifndef PAGE92_H
#define PAGE92_H

#include <QDialog>

namespace Ui {
class page92;
}

class page92 : public QDialog
{
    Q_OBJECT

public:
    explicit page92(QWidget *parent = 0);
    ~page92();

private:
    Ui::page92 *ui;
};

#endif // PAGE92_H
