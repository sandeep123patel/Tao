#ifndef PTESTMATH2_H
#define PTESTMATH2_H

#include <QMainWindow>

namespace Ui {
class PtestMath2;
}

class PtestMath2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestMath2(QWidget *parent = 0);
    ~PtestMath2();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PtestMath2 *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PTESTMATH2_H
