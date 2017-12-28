#ifndef PAGE66_H
#define PAGE66_H

#include <QDialog>

namespace Ui {
class page66;
}

class page66 : public QDialog
{
    Q_OBJECT

public:
    explicit page66(QWidget *parent = 0);
    ~page66();

private:
    Ui::page66 *ui;
};

#endif // PAGE66_H
