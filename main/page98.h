#ifndef PAGE98_H
#define PAGE98_H

#include <QDialog>

namespace Ui {
class page98;
}

class page98 : public QDialog
{
    Q_OBJECT

public:
    explicit page98(QWidget *parent = 0);
    ~page98();

private:
    Ui::page98 *ui;
};

#endif // PAGE98_H
