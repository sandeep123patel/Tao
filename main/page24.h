#ifndef PAGE24_H
#define PAGE24_H

#include <QDialog>

namespace Ui {
class page24;
}

class page24 : public QDialog
{
    Q_OBJECT

public:
    explicit page24(QWidget *parent = 0);
    ~page24();

private:
    Ui::page24 *ui;
};

#endif // PAGE24_H
