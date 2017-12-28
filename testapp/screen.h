#ifndef SCREEN_H
#define SCREEN_H

#include <QDialog>

namespace Ui {
class screen;
}

class screen : public QDialog
{
    Q_OBJECT

public:
    explicit screen(QWidget *parent = 0);
    ~screen();

private:
    Ui::screen *ui;
};

#endif // SCREEN_H
