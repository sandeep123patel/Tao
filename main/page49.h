#ifndef PAGE49_H
#define PAGE49_H

#include <QDialog>

namespace Ui {
class page49;
}

class page49 : public QDialog
{
    Q_OBJECT

public:
    explicit page49(QWidget *parent = 0);
    ~page49();

private:
    Ui::page49 *ui;
};

#endif // PAGE49_H
