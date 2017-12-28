#ifndef PAGE32_H
#define PAGE32_H

#include <QDialog>

namespace Ui {
class page32;
}

class page32 : public QDialog
{
    Q_OBJECT

public:
    explicit page32(QWidget *parent = 0);
    ~page32();

private:
    Ui::page32 *ui;
};

#endif // PAGE32_H
