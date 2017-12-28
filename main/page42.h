#ifndef PAGE42_H
#define PAGE42_H

#include <QDialog>

namespace Ui {
class page42;
}

class page42 : public QDialog
{
    Q_OBJECT

public:
    explicit page42(QWidget *parent = 0);
    ~page42();

private:
    Ui::page42 *ui;
};

#endif // PAGE42_H
