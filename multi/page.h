#ifndef PAGE_H
#define PAGE_H

#include <QDialog>

namespace Ui {
class page;
}

class page : public QDialog
{
    Q_OBJECT

public:
    explicit page(QWidget *parent = 0);
    ~page();

private:
    Ui::page *ui;
};

#endif // PAGE_H
