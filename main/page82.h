#ifndef PAGE82_H
#define PAGE82_H

#include <QDialog>

namespace Ui {
class page82;
}

class page82 : public QDialog
{
    Q_OBJECT

public:
    explicit page82(QWidget *parent = 0);
    ~page82();

private:
    Ui::page82 *ui;
};

#endif // PAGE82_H
