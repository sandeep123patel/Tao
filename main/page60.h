#ifndef PAGE60_H
#define PAGE60_H

#include <QDialog>

namespace Ui {
class page60;
}

class page60 : public QDialog
{
    Q_OBJECT

public:
    explicit page60(QWidget *parent = 0);
    ~page60();

private:
    Ui::page60 *ui;
};

#endif // PAGE60_H
