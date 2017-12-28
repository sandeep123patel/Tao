#ifndef PAGE9_H
#define PAGE9_H

#include <QDialog>

namespace Ui {
class page9;
}

class page9 : public QDialog
{
    Q_OBJECT

public:
    explicit page9(QWidget *parent = 0);
    ~page9();

private:
    Ui::page9 *ui;
};

#endif // PAGE9_H
