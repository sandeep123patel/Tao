#ifndef PAGE44_H
#define PAGE44_H

#include <QDialog>

namespace Ui {
class page44;
}

class page44 : public QDialog
{
    Q_OBJECT

public:
    explicit page44(QWidget *parent = 0);
    ~page44();

private:
    Ui::page44 *ui;
};

#endif // PAGE44_H
