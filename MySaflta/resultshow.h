#ifndef RESULTSHOW_H
#define RESULTSHOW_H

#include <QMainWindow>

namespace Ui {
class Resultshow;
}

class Resultshow : public QMainWindow
{
    Q_OBJECT

public:
    explicit Resultshow(QWidget *parent = 0);
    ~Resultshow();

private:
    Ui::Resultshow *ui;
};

#endif // RESULTSHOW_H
