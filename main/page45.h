#ifndef PAGE45_H
#define PAGE45_H

#include <QDialog>

namespace Ui {
class page45;
}

class page45 : public QDialog
{
    Q_OBJECT

public:
    explicit page45(QWidget *parent = 0);
    ~page45();

private:
    Ui::page45 *ui;
};

#endif // PAGE45_H
