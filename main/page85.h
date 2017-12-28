#ifndef PAGE85_H
#define PAGE85_H

#include <QDialog>

namespace Ui {
class page85;
}

class page85 : public QDialog
{
    Q_OBJECT

public:
    explicit page85(QWidget *parent = 0);
    ~page85();

private:
    Ui::page85 *ui;
};

#endif // PAGE85_H
