#ifndef PAGE13_H
#define PAGE13_H

#include <QDialog>

namespace Ui {
class page13;
}

class page13 : public QDialog
{
    Q_OBJECT

public:
    explicit page13(QWidget *parent = 0);
    ~page13();

private:
    Ui::page13 *ui;
};

#endif // PAGE13_H
