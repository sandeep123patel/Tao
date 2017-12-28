#ifndef PAGE36_H
#define PAGE36_H

#include <QDialog>

namespace Ui {
class page36;
}

class page36 : public QDialog
{
    Q_OBJECT

public:
    explicit page36(QWidget *parent = 0);
    ~page36();

private:
    Ui::page36 *ui;
};

#endif // PAGE36_H
