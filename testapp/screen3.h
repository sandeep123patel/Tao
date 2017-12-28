#ifndef SCREEN3_H
#define SCREEN3_H

#include <QDialog>

namespace Ui {
class screen3;
}

class screen3 : public QDialog
{
    Q_OBJECT

public:
    explicit screen3(QWidget *parent = 0);
    ~screen3();

private:
    Ui::screen3 *ui;
};

#endif // SCREEN3_H
