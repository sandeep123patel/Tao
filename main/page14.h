#ifndef PAGE14_H
#define PAGE14_H

#include <QDialog>

namespace Ui {
class page14;
}

class page14 : public QDialog
{
    Q_OBJECT

public:
    explicit page14(QWidget *parent = 0);
    ~page14();

private:
    Ui::page14 *ui;
};

#endif // PAGE14_H
