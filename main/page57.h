#ifndef PAGE57_H
#define PAGE57_H

#include <QDialog>

namespace Ui {
class page57;
}

class page57 : public QDialog
{
    Q_OBJECT

public:
    explicit page57(QWidget *parent = 0);
    ~page57();

private:
    Ui::page57 *ui;
};

#endif // PAGE57_H
