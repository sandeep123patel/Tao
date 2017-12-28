#ifndef SCREEN4_H
#define SCREEN4_H

#include <QDialog>

namespace Ui {
class screen4;
}

class screen4 : public QDialog
{
    Q_OBJECT

public:
    explicit screen4(QWidget *parent = 0);
    ~screen4();

private:
    Ui::screen4 *ui;
};

#endif // SCREEN4_H
