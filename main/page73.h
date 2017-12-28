#ifndef PAGE73_H
#define PAGE73_H

#include <QDialog>

namespace Ui {
class page73;
}

class page73 : public QDialog
{
    Q_OBJECT

public:
    explicit page73(QWidget *parent = 0);
    ~page73();

private:
    Ui::page73 *ui;
};

#endif // PAGE73_H
