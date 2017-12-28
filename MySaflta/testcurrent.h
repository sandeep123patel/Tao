#ifndef TESTCURRENT_H
#define TESTCURRENT_H

#include <QMainWindow>

namespace Ui {
class TestCurrent;
}

class TestCurrent : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestCurrent(QWidget *parent = 0);
    ~TestCurrent();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::TestCurrent *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTCURRENT_H
