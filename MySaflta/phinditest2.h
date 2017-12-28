#ifndef PHINDITEST2_H
#define PHINDITEST2_H

#include <QMainWindow>

namespace Ui {
class PhindiTest2;
}

class PhindiTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhindiTest2(QWidget *parent = 0);
    ~PhindiTest2();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PhindiTest2 *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PHINDITEST2_H
