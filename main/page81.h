#ifndef PAGE81_H
#define PAGE81_H

#include <QDialog>

namespace Ui {
class page81;
}

class page81 : public QDialog
{
    Q_OBJECT

public:
    explicit page81(QWidget *parent = 0);
    ~page81();

private:
    Ui::page81 *ui;
};

#endif // PAGE81_H
