#ifndef PAGE97_H
#define PAGE97_H

#include <QDialog>

namespace Ui {
class page97;
}

class page97 : public QDialog
{
    Q_OBJECT

public:
    explicit page97(QWidget *parent = 0);
    ~page97();

private:
    Ui::page97 *ui;
};

#endif // PAGE97_H
