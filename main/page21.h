#ifndef PAGE21_H
#define PAGE21_H

#include <QDialog>

namespace Ui {
class page21;
}

class page21 : public QDialog
{
    Q_OBJECT

public:
    explicit page21(QWidget *parent = 0);
    ~page21();

private:
    Ui::page21 *ui;
};

#endif // PAGE21_H
