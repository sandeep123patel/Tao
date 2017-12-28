#ifndef PAGE48_H
#define PAGE48_H

#include <QDialog>

namespace Ui {
class page48;
}

class page48 : public QDialog
{
    Q_OBJECT

public:
    explicit page48(QWidget *parent = 0);
    ~page48();

private:
    Ui::page48 *ui;
};

#endif // PAGE48_H
