#ifndef TESTGK_H
#define TESTGK_H

#include <QDialog>

namespace Ui {
class testgk;
}

class testgk : public QDialog
{
    Q_OBJECT

public:
    explicit testgk(QWidget *parent = 0);
    ~testgk();

private:
    Ui::testgk *ui;
};

#endif // TESTGK_H
