#ifndef PAGE50_H
#define PAGE50_H

#include <QDialog>

namespace Ui {
class page50;
}

class page50 : public QDialog
{
    Q_OBJECT

public:
    explicit page50(QWidget *parent = 0);
    ~page50();

private:
    Ui::page50 *ui;
};

#endif // PAGE50_H
