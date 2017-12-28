#ifndef PAGE6_H
#define PAGE6_H

#include <QDialog>

namespace Ui {
class page6;
}

class page6 : public QDialog
{
    Q_OBJECT

public:
    explicit page6(QWidget *parent = 0);
    ~page6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::page6 *ui;
};

#endif // PAGE6_H
