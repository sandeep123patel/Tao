#ifndef PTESTGK_H
#define PTESTGK_H

#include <QDialog>

namespace Ui {
class ptestgk;
}

class ptestgk : public QDialog
{
    Q_OBJECT

public:
    explicit ptestgk(QWidget *parent = 0);
    ~ptestgk();

private:
    Ui::ptestgk *ui;
};

#endif // PTESTGK_H
