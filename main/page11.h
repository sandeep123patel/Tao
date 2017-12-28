#ifndef PAGE11_H
#define PAGE11_H

#include <QDialog>

namespace Ui {
class page11;
}

class page11 : public QDialog
{
    Q_OBJECT

public:
    explicit page11(QWidget *parent = 0);
    ~page11();

private:
    Ui::page11 *ui;
};

#endif // PAGE11_H
