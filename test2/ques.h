#ifndef QUES_H
#define QUES_H

#include <QDialog>

namespace Ui {
class ques;
}

class ques : public QDialog
{
    Q_OBJECT

public:
    explicit ques(QWidget *parent = 0);
    ~ques();

private:
    Ui::ques *ui;
};

#endif // QUES_H
