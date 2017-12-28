#ifndef PAGE7_H
#define PAGE7_H

#include <QDialog>

namespace Ui {
class page7;
}

class page7 : public QDialog
{
    Q_OBJECT

public:
    explicit page7(QWidget *parent = 0);
    ~page7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::page7 *ui;
};

#endif // PAGE7_H
