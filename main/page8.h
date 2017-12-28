#ifndef PAGE8_H
#define PAGE8_H

#include <QDialog>

namespace Ui {
class page8;
}

class page8 : public QDialog
{
    Q_OBJECT

public:
    explicit page8(QWidget *parent = 0);
    ~page8();

private:
    Ui::page8 *ui;
};

#endif // PAGE8_H
