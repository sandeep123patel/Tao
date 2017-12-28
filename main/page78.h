#ifndef PAGE78_H
#define PAGE78_H

#include <QDialog>

namespace Ui {
class page78;
}

class page78 : public QDialog
{
    Q_OBJECT

public:
    explicit page78(QWidget *parent = 0);
    ~page78();

private:
    Ui::page78 *ui;
};

#endif // PAGE78_H
