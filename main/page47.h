#ifndef PAGE47_H
#define PAGE47_H

#include <QDialog>

namespace Ui {
class page47;
}

class page47 : public QDialog
{
    Q_OBJECT

public:
    explicit page47(QWidget *parent = 0);
    ~page47();

private:
    Ui::page47 *ui;
};

#endif // PAGE47_H
