#ifndef PPNTCHTEST2_H
#define PPNTCHTEST2_H

#include <QMainWindow>

namespace Ui {
class PpntchTest2;
}

class PpntchTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PpntchTest2(QWidget *parent = 0);
    ~PpntchTest2();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PpntchTest2 *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PPNTCHTEST2_H
