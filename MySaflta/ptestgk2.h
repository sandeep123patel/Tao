#ifndef PTESTGK2_H
#define PTESTGK2_H

#include <QMainWindow>

namespace Ui {
class PtestGk2;
}

class PtestGk2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestGk2(QWidget *parent = 0);
    ~PtestGk2();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PtestGk2 *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PTESTGK2_H
