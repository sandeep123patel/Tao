#ifndef PAGE46_H
#define PAGE46_H

#include <QDialog>

namespace Ui {
class page46;
}

class page46 : public QDialog
{
    Q_OBJECT

public:
    explicit page46(QWidget *parent = 0);
    ~page46();

private:
    Ui::page46 *ui;
};

#endif // PAGE46_H
