#ifndef SANDEEP_H
#define SANDEEP_H

#include <QMainWindow>

namespace Ui {
class sandeep;
}

class sandeep : public QMainWindow
{
    Q_OBJECT

public:
    explicit sandeep(QWidget *parent = 0);
    ~sandeep();

private:
    Ui::sandeep *ui;
};

#endif // SANDEEP_H
