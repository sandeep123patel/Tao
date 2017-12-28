#ifndef PAGE69_H
#define PAGE69_H

#include <QDialog>

namespace Ui {
class page69;
}

class page69 : public QDialog
{
    Q_OBJECT

public:
    explicit page69(QWidget *parent = 0);
    ~page69();

private:
    Ui::page69 *ui;
};

#endif // PAGE69_H
