#ifndef THANKYOUCOMPUTER_H
#define THANKYOUCOMPUTER_H

#include <QDialog>

namespace Ui {
class Thankyoucomputer;
}

class Thankyoucomputer : public QDialog
{
    Q_OBJECT

public:
    explicit Thankyoucomputer(QWidget *parent = 0);
    ~Thankyoucomputer();

private:
    Ui::Thankyoucomputer *ui;
};

#endif // THANKYOUCOMPUTER_H
