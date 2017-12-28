#ifndef PAGE38_H
#define PAGE38_H

#include <QDialog>

namespace Ui {
class page38;
}

class page38 : public QDialog
{
    Q_OBJECT

public:
    explicit page38(QWidget *parent = 0);
    ~page38();

private:
    Ui::page38 *ui;
};

#endif // PAGE38_H
