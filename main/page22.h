#ifndef PAGE22_H
#define PAGE22_H

#include <QDialog>

namespace Ui {
class page22;
}

class page22 : public QDialog
{
    Q_OBJECT

public:
    explicit page22(QWidget *parent = 0);
    ~page22();

private:
    Ui::page22 *ui;
};

#endif // PAGE22_H
