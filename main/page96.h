#ifndef PAGE96_H
#define PAGE96_H

#include <QDialog>

namespace Ui {
class page96;
}

class page96 : public QDialog
{
    Q_OBJECT

public:
    explicit page96(QWidget *parent = 0);
    ~page96();

private:
    Ui::page96 *ui;
};

#endif // PAGE96_H
