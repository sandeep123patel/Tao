#ifndef PAGE90_H
#define PAGE90_H

#include <QDialog>

namespace Ui {
class page90;
}

class page90 : public QDialog
{
    Q_OBJECT

public:
    explicit page90(QWidget *parent = 0);
    ~page90();

private:
    Ui::page90 *ui;
};

#endif // PAGE90_H
