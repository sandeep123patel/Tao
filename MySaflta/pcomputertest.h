#ifndef PCOMPUTERTEST_H
#define PCOMPUTERTEST_H

#include <QMainWindow>

namespace Ui {
class PcomputerTest;
}

class PcomputerTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PcomputerTest(QWidget *parent = 0);
    ~PcomputerTest();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PcomputerTest *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PCOMPUTERTEST_H
