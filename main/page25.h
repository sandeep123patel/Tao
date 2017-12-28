#ifndef PAGE25_H
#define PAGE25_H

#include <QDialog>

namespace Ui {
class page25;
}

class page25 : public QDialog
{
    Q_OBJECT

public:
    explicit page25(QWidget *parent = 0);
    ~page25();

private:
    Ui::page25 *ui;
};

#endif // PAGE25_H
