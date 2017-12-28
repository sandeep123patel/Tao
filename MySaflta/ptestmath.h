#ifndef PTESTMATH_H
#define PTESTMATH_H

#include <QMainWindow>

namespace Ui {
class PtestMath;
}

class PtestMath : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestMath(QWidget *parent = 0);
    ~PtestMath();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PtestMath *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PTESTMATH_H
