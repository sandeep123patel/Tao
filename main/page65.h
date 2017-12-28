#ifndef PAGE65_H
#define PAGE65_H

#include <QDialog>

namespace Ui {
class page65;
}

class page65 : public QDialog
{
    Q_OBJECT

public:
    explicit page65(QWidget *parent = 0);
    ~page65();

private:
    Ui::page65 *ui;
};

#endif // PAGE65_H
