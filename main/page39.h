#ifndef PAGE39_H
#define PAGE39_H

#include <QDialog>

namespace Ui {
class page39;
}

class page39 : public QDialog
{
    Q_OBJECT

public:
    explicit page39(QWidget *parent = 0);
    ~page39();

private:
    Ui::page39 *ui;
};

#endif // PAGE39_H
