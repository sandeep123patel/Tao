#ifndef PAGE43_H
#define PAGE43_H

#include <QDialog>

namespace Ui {
class page43;
}

class page43 : public QDialog
{
    Q_OBJECT

public:
    explicit page43(QWidget *parent = 0);
    ~page43();

private:
    Ui::page43 *ui;
};

#endif // PAGE43_H
