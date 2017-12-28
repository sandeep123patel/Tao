#ifndef PAGE93_H
#define PAGE93_H

#include <QDialog>

namespace Ui {
class page93;
}

class page93 : public QDialog
{
    Q_OBJECT

public:
    explicit page93(QWidget *parent = 0);
    ~page93();

private:
    Ui::page93 *ui;
};

#endif // PAGE93_H
