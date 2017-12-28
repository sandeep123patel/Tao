#ifndef PAGE61_H
#define PAGE61_H

#include <QDialog>

namespace Ui {
class page61;
}

class page61 : public QDialog
{
    Q_OBJECT

public:
    explicit page61(QWidget *parent = 0);
    ~page61();

private:
    Ui::page61 *ui;
};

#endif // PAGE61_H
