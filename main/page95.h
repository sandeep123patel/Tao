#ifndef PAGE95_H
#define PAGE95_H

#include <QDialog>

namespace Ui {
class page95;
}

class page95 : public QDialog
{
    Q_OBJECT

public:
    explicit page95(QWidget *parent = 0);
    ~page95();

private:
    Ui::page95 *ui;
};

#endif // PAGE95_H
