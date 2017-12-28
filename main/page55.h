#ifndef PAGE55_H
#define PAGE55_H

#include <QDialog>

namespace Ui {
class page55;
}

class page55 : public QDialog
{
    Q_OBJECT

public:
    explicit page55(QWidget *parent = 0);
    ~page55();

private:
    Ui::page55 *ui;
};

#endif // PAGE55_H
