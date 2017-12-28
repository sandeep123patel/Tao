#ifndef PAGE80_H
#define PAGE80_H

#include <QDialog>

namespace Ui {
class page80;
}

class page80 : public QDialog
{
    Q_OBJECT

public:
    explicit page80(QWidget *parent = 0);
    ~page80();

private:
    Ui::page80 *ui;
};

#endif // PAGE80_H
