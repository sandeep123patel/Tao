#ifndef PAGE26_H
#define PAGE26_H

#include <QDialog>

namespace Ui {
class page26;
}

class page26 : public QDialog
{
    Q_OBJECT

public:
    explicit page26(QWidget *parent = 0);
    ~page26();

private:
    Ui::page26 *ui;
};

#endif // PAGE26_H
