#ifndef PAGE70_H
#define PAGE70_H

#include <QDialog>

namespace Ui {
class page70;
}

class page70 : public QDialog
{
    Q_OBJECT

public:
    explicit page70(QWidget *parent = 0);
    ~page70();

private:
    Ui::page70 *ui;
};

#endif // PAGE70_H
