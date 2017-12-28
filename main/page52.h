#ifndef PAGE52_H
#define PAGE52_H

#include <QDialog>

namespace Ui {
class page52;
}

class page52 : public QDialog
{
    Q_OBJECT

public:
    explicit page52(QWidget *parent = 0);
    ~page52();

private:
    Ui::page52 *ui;
};

#endif // PAGE52_H
