#ifndef PAGE27_H
#define PAGE27_H

#include <QDialog>

namespace Ui {
class page27;
}

class page27 : public QDialog
{
    Q_OBJECT

public:
    explicit page27(QWidget *parent = 0);
    ~page27();

private:
    Ui::page27 *ui;
};

#endif // PAGE27_H
