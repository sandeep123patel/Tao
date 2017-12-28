#ifndef PAGE89_H
#define PAGE89_H

#include <QDialog>

namespace Ui {
class page89;
}

class page89 : public QDialog
{
    Q_OBJECT

public:
    explicit page89(QWidget *parent = 0);
    ~page89();

private:
    Ui::page89 *ui;
};

#endif // PAGE89_H
