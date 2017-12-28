#ifndef PAGE64_H
#define PAGE64_H

#include <QDialog>

namespace Ui {
class page64;
}

class page64 : public QDialog
{
    Q_OBJECT

public:
    explicit page64(QWidget *parent = 0);
    ~page64();

private:
    Ui::page64 *ui;
};

#endif // PAGE64_H
