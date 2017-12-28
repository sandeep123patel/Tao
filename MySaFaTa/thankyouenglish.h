#ifndef THANKYOUENGLISH_H
#define THANKYOUENGLISH_H

#include <QDialog>

namespace Ui {
class thankyouenglish;
}

class thankyouenglish : public QDialog
{
    Q_OBJECT

public:
    explicit thankyouenglish(QWidget *parent = 0);
    ~thankyouenglish();

private:
    Ui::thankyouenglish *ui;
};

#endif // THANKYOUENGLISH_H
