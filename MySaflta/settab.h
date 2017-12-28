#ifndef SETTAB_H
#define SETTAB_H

#include <QMainWindow>

namespace Ui {
class SetTab;
}

class SetTab : public QMainWindow
{
    Q_OBJECT

public:
    explicit SetTab(QWidget *parent = 0);
    ~SetTab();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::SetTab *ui;
};

#endif // SETTAB_H
