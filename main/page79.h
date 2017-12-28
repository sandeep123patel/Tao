#ifndef PAGE79_H
#define PAGE79_H

#include <QDialog>

namespace Ui {
class page79;
}

class page79 : public QDialog
{
    Q_OBJECT

public:
    explicit page79(QWidget *parent = 0);
    ~page79();

private:
    Ui::page79 *ui;
};

#endif // PAGE79_H
