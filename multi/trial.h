#ifndef TRIAL_H
#define TRIAL_H

#include <QDialog>

namespace Ui {
class trial;
}

class trial : public QDialog
{
    Q_OBJECT

public:
    explicit trial(QWidget *parent = 0);
    ~trial();

private:
    Ui::trial *ui;
};

#endif // TRIAL_H
