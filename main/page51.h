#ifndef PAGE51_H
#define PAGE51_H

#include <QDialog>

namespace Ui {
class page51;
}

class page51 : public QDialog
{
    Q_OBJECT

public:
    explicit page51(QWidget *parent = 0);
    ~page51();

private:
    Ui::page51 *ui;
};

#endif // PAGE51_H
