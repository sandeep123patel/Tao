#ifndef PTESTMATH_H
#define PTESTMATH_H

#include <QDialog>

namespace Ui {
class ptestmath;
}

class ptestmath : public QDialog
{
    Q_OBJECT

public:
    explicit ptestmath(QWidget *parent = 0);
    ~ptestmath();

private:
    Ui::ptestmath *ui;
};

#endif // PTESTMATH_H
