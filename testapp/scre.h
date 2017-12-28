#ifndef SCRE_H
#define SCRE_H

#include <QDialog>

namespace Ui {
class scre;
}

class scre : public QDialog
{
    Q_OBJECT

public:
    explicit scre(QWidget *parent = 0);
    ~scre();

private:
    Ui::scre *ui;
};

#endif // SCRE_H
