#ifndef TANKYOUMATH_H
#define TANKYOUMATH_H

#include <QDialog>

namespace Ui {
class Tankyoumath;
}

class Tankyoumath : public QDialog
{
    Q_OBJECT

public:
    explicit Tankyoumath(QWidget *parent = 0);
    ~Tankyoumath();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Tankyoumath *ui;
};

#endif // TANKYOUMATH_H
