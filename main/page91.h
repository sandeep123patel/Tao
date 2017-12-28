#ifndef PAGE91_H
#define PAGE91_H

#include <QDialog>

namespace Ui {
class page91;
}

class page91 : public QDialog
{
    Q_OBJECT

public:
    explicit page91(QWidget *parent = 0);
    ~page91();

private:
    Ui::page91 *ui;
};

#endif // PAGE91_H
