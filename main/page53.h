#ifndef PAGE53_H
#define PAGE53_H

#include <QDialog>

namespace Ui {
class page53;
}

class page53 : public QDialog
{
    Q_OBJECT

public:
    explicit page53(QWidget *parent = 0);
    ~page53();

private:
    Ui::page53 *ui;
};

#endif // PAGE53_H
