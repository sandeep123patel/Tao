#ifndef PTESTHINDI_H
#define PTESTHINDI_H

#include <QDialog>

namespace Ui {
class ptesthindi;
}

class ptesthindi : public QDialog
{
    Q_OBJECT

public:
    explicit ptesthindi(QWidget *parent = 0);
    ~ptesthindi();

private:
    Ui::ptesthindi *ui;
};

#endif // PTESTHINDI_H
