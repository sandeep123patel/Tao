#ifndef PAGE94_H
#define PAGE94_H

#include <QDialog>

namespace Ui {
class page94;
}

class page94 : public QDialog
{
    Q_OBJECT

public:
    explicit page94(QWidget *parent = 0);
    ~page94();

private:
    Ui::page94 *ui;
};

#endif // PAGE94_H
