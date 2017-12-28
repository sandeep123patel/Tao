#ifndef PAGE15_H
#define PAGE15_H

#include <QDialog>

namespace Ui {
class page15;
}

class page15 : public QDialog
{
    Q_OBJECT

public:
    explicit page15(QWidget *parent = 0);
    ~page15();

private:
    Ui::page15 *ui;
};

#endif // PAGE15_H
