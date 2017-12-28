#ifndef PAGE18_H
#define PAGE18_H

#include <QDialog>

namespace Ui {
class page18;
}

class page18 : public QDialog
{
    Q_OBJECT

public:
    explicit page18(QWidget *parent = 0);
    ~page18();

private:
    Ui::page18 *ui;
};

#endif // PAGE18_H
