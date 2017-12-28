#ifndef PAGE87_H
#define PAGE87_H

#include <QDialog>

namespace Ui {
class page87;
}

class page87 : public QDialog
{
    Q_OBJECT

public:
    explicit page87(QWidget *parent = 0);
    ~page87();

private:
    Ui::page87 *ui;
};

#endif // PAGE87_H
