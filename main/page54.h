#ifndef PAGE54_H
#define PAGE54_H

#include <QDialog>

namespace Ui {
class page54;
}

class page54 : public QDialog
{
    Q_OBJECT

public:
    explicit page54(QWidget *parent = 0);
    ~page54();

private:
    Ui::page54 *ui;
};

#endif // PAGE54_H
