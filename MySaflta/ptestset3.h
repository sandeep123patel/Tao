#ifndef PTESTSET3_H
#define PTESTSET3_H

#include <QMainWindow>

namespace Ui {
class Ptestset3;
}

class Ptestset3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestset3(QWidget *parent = 0);
    ~Ptestset3();

private:
    Ui::Ptestset3 *ui;
};

#endif // PTESTSET3_H
