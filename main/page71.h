#ifndef PAGE71_H
#define PAGE71_H

#include <QDialog>

namespace Ui {
class page71;
}

class page71 : public QDialog
{
    Q_OBJECT

public:
    explicit page71(QWidget *parent = 0);
    ~page71();

private:
    Ui::page71 *ui;
};

#endif // PAGE71_H
