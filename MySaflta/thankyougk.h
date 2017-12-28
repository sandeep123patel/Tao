#ifndef THANKYOUGK_H
#define THANKYOUGK_H

#include <QMainWindow>

namespace Ui {
class Thankyougk;
}

class Thankyougk : public QMainWindow
{
    Q_OBJECT

public:
    explicit Thankyougk(QWidget *parent = 0);
    ~Thankyougk();

private:
    Ui::Thankyougk *ui;
};

#endif // THANKYOUGK_H
