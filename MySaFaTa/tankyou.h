#ifndef TANKYOU_H
#define TANKYOU_H

#include <QDialog>

namespace Ui {
class Tankyou;
}

class Tankyou : public QDialog
{
    Q_OBJECT

public:
    explicit Tankyou(QWidget *parent = 0);
    ~Tankyou();

private:
    Ui::Tankyou *ui;
};

#endif // TANKYOU_H
