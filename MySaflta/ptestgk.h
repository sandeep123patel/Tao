#ifndef PTESTGK_H
#define PTESTGK_H

#include <QMainWindow>

namespace Ui {
class Ptestgk;
}

class Ptestgk : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestgk(QWidget *parent = 0);
    ~Ptestgk();

private:
    Ui::Ptestgk *ui;
};

#endif // PTESTGK_H
