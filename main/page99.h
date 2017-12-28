#ifndef PAGE99_H
#define PAGE99_H

#include <QDialog>

namespace Ui {
class page99;
}

class page99 : public QDialog
{
    Q_OBJECT

public:
    explicit page99(QWidget *parent = 0);
    ~page99();

private:
    Ui::page99 *ui;
};

#endif // PAGE99_H
