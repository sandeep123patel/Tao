#ifndef PAGE83_H
#define PAGE83_H

#include <QDialog>

namespace Ui {
class page83;
}

class page83 : public QDialog
{
    Q_OBJECT

public:
    explicit page83(QWidget *parent = 0);
    ~page83();

private:
    Ui::page83 *ui;
};

#endif // PAGE83_H
