#ifndef PAGE1_H
#define PAGE1_H

#include <QDialog>

namespace Ui {
class page1;
}

class page1 : public QDialog
{
    Q_OBJECT

public:
    explicit page1(QWidget *parent = 0);
    ~page1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::page1 *ui;
};

#endif // PAGE1_H
