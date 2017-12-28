#ifndef PHINDITEST_H
#define PHINDITEST_H

#include <QMainWindow>

namespace Ui {
class PhindiTest;
}

class PhindiTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PhindiTest(QWidget *parent = 0);
    ~PhindiTest();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PhindiTest *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PHINDITEST_H
