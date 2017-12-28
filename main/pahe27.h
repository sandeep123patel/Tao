#ifndef PAHE27_H
#define PAHE27_H

#include <QDialog>

namespace Ui {
class pahe27;
}

class pahe27 : public QDialog
{
    Q_OBJECT

public:
    explicit pahe27(QWidget *parent = 0);
    ~pahe27();

private:
    Ui::pahe27 *ui;
};

#endif // PAHE27_H
