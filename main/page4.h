#ifndef PAGE4_H
#define PAGE4_H

#include <QDialog>

namespace Ui {
class page4;
}

class page4 : public QDialog
{
    Q_OBJECT

public:
    explicit page4(QWidget *parent = 0);
    ~page4();

private:
    Ui::page4 *ui;
};

#endif // PAGE4_H
