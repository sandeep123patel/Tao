#ifndef PAGE16_H
#define PAGE16_H

#include <QDialog>

namespace Ui {
class page16;
}

class page16 : public QDialog
{
    Q_OBJECT

public:
    explicit page16(QWidget *parent = 0);
    ~page16();

private:
    Ui::page16 *ui;
};

#endif // PAGE16_H
