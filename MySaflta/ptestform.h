#ifndef PTESTFORM_H
#define PTESTFORM_H

#include <QMainWindow>

namespace Ui {
class Ptestform;
}

class Ptestform : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestform(QWidget *parent = 0);
    ~Ptestform();

private:
    Ui::Ptestform *ui;
};

#endif // PTESTFORM_H
