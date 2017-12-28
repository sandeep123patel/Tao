#ifndef PAGE40_H
#define PAGE40_H

#include <QDialog>

namespace Ui {
class page40;
}

class page40 : public QDialog
{
    Q_OBJECT

public:
    explicit page40(QWidget *parent = 0);
    ~page40();

private:
    Ui::page40 *ui;
};

#endif // PAGE40_H
