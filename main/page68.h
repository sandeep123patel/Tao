#ifndef PAGE68_H
#define PAGE68_H

#include <QDialog>

namespace Ui {
class page68;
}

class page68 : public QDialog
{
    Q_OBJECT

public:
    explicit page68(QWidget *parent = 0);
    ~page68();

private:
    Ui::page68 *ui;
};

#endif // PAGE68_H
