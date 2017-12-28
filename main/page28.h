#ifndef PAGE28_H
#define PAGE28_H

#include <QDialog>

namespace Ui {
class page28;
}

class page28 : public QDialog
{
    Q_OBJECT

public:
    explicit page28(QWidget *parent = 0);
    ~page28();

private:
    Ui::page28 *ui;
};

#endif // PAGE28_H
