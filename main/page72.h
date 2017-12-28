#ifndef PAGE72_H
#define PAGE72_H

#include <QDialog>

namespace Ui {
class page72;
}

class page72 : public QDialog
{
    Q_OBJECT

public:
    explicit page72(QWidget *parent = 0);
    ~page72();

private:
    Ui::page72 *ui;
};

#endif // PAGE72_H
