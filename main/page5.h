#ifndef PAGE5_H
#define PAGE5_H

#include <QDialog>

namespace Ui {
class page5;
}

class page5 : public QDialog
{
    Q_OBJECT

public:
    explicit page5(QWidget *parent = 0);
    ~page5();

private slots:
    void on_pushButton_clicked();

private:
    Ui::page5 *ui;
};

#endif // PAGE5_H
