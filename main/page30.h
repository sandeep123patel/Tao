#ifndef PAGE30_H
#define PAGE30_H

#include <QDialog>

namespace Ui {
class page30;
}

class page30 : public QDialog
{
    Q_OBJECT

public:
    explicit page30(QWidget *parent = 0);
    ~page30();

private:
    Ui::page30 *ui;
};

#endif // PAGE30_H
