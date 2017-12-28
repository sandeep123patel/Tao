#ifndef PAGE67_H
#define PAGE67_H

#include <QDialog>

namespace Ui {
class page67;
}

class page67 : public QDialog
{
    Q_OBJECT

public:
    explicit page67(QWidget *parent = 0);
    ~page67();

private:
    Ui::page67 *ui;
};

#endif // PAGE67_H
