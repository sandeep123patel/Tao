#ifndef TESTPAGEHINDI_H
#define TESTPAGEHINDI_H

#include <QMainWindow>

namespace Ui {
class TestpageHindi;
}

class TestpageHindi : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpageHindi(QWidget *parent = 0);
    ~TestpageHindi();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();




private:

    Ui::TestpageHindi *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTPAGEHINDI_H
