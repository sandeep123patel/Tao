#ifndef PAGE41_H
#define PAGE41_H

#include <QDialog>

namespace Ui {
class page41;
}

class page41 : public QDialog
{
    Q_OBJECT

public:
    explicit page41(QWidget *parent = 0);
    ~page41();

private:
    Ui::page41 *ui;
};

#endif // PAGE41_H
