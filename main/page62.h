#ifndef PAGE62_H
#define PAGE62_H

#include <QDialog>

namespace Ui {
class page62;
}

class page62 : public QDialog
{
    Q_OBJECT

public:
    explicit page62(QWidget *parent = 0);
    ~page62();

private:
    Ui::page62 *ui;
};

#endif // PAGE62_H
