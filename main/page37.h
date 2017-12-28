#ifndef PAGE37_H
#define PAGE37_H

#include <QDialog>

namespace Ui {
class page37;
}

class page37 : public QDialog
{
    Q_OBJECT

public:
    explicit page37(QWidget *parent = 0);
    ~page37();

private:
    Ui::page37 *ui;
};

#endif // PAGE37_H
