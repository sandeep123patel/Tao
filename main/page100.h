#ifndef PAGE100_H
#define PAGE100_H

#include <QDialog>

namespace Ui {
class page100;
}

class page100 : public QDialog
{
    Q_OBJECT

public:
    explicit page100(QWidget *parent = 0);
    ~page100();

private:
    Ui::page100 *ui;
};

#endif // PAGE100_H
