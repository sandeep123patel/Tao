#ifndef PAGE19_H
#define PAGE19_H

#include <QDialog>

namespace Ui {
class page19;
}

class page19 : public QDialog
{
    Q_OBJECT

public:
    explicit page19(QWidget *parent = 0);
    ~page19();

private:
    Ui::page19 *ui;
};

#endif // PAGE19_H
