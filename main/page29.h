#ifndef PAGE29_H
#define PAGE29_H

#include <QDialog>

namespace Ui {
class page29;
}

class page29 : public QDialog
{
    Q_OBJECT

public:
    explicit page29(QWidget *parent = 0);
    ~page29();

private:
    Ui::page29 *ui;
};

#endif // PAGE29_H
