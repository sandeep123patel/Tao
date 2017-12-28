#ifndef TESTPAGECOMPUTER_H
#define TESTPAGECOMPUTER_H

#include <QMainWindow>

namespace Ui {
class TestpageComputer;
}

class TestpageComputer : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpageComputer(QWidget *parent = 0);
    ~TestpageComputer();

private slots:
    void on_pushButton_2_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_8_clicked();

private:
    Ui::TestpageComputer *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTPAGECOMPUTER_H
