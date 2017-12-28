#ifndef PAGE56_H
#define PAGE56_H

#include <QDialog>

namespace Ui {
class page56;
}

class page56 : public QDialog
{
    Q_OBJECT

public:
    explicit page56(QWidget *parent = 0);
    ~page56();

private:
    Ui::page56 *ui;
};

#endif // PAGE56_H
