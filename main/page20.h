#ifndef PAGE20_H
#define PAGE20_H

#include <QDialog>

namespace Ui {
class page20;
}

class page20 : public QDialog
{
    Q_OBJECT

public:
    explicit page20(QWidget *parent = 0);
    ~page20();

private:
    Ui::page20 *ui;
};

#endif // PAGE20_H
