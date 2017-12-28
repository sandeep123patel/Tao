#ifndef PAGE_H
#define PAGE_H

#include <QDialog>

namespace Ui {
class page;
}

class page : public QDialog
{
    Q_OBJECT

public:
    explicit page(QWidget *parent = 0);
    ~page();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::page *ui;
};

#endif // PAGE_H
