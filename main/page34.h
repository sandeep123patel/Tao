#ifndef PAGE34_H
#define PAGE34_H

#include <QDialog>

namespace Ui {
class page34;
}

class page34 : public QDialog
{
    Q_OBJECT

public:
    explicit page34(QWidget *parent = 0);
    ~page34();

private:
    Ui::page34 *ui;
};

#endif // PAGE34_H
