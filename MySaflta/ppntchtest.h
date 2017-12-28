#ifndef PPNTCHTEST_H
#define PPNTCHTEST_H

#include <QMainWindow>

namespace Ui {
class PpntchTest;
}

class PpntchTest : public QMainWindow
{
    Q_OBJECT

public:
    explicit PpntchTest(QWidget *parent = 0);
    ~PpntchTest();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PpntchTest *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PPNTCHTEST_H
