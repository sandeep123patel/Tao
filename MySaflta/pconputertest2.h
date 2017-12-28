#ifndef PCONPUTERTEST2_H
#define PCONPUTERTEST2_H

#include <QMainWindow>

namespace Ui {
class PconputerTest2;
}

class PconputerTest2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PconputerTest2(QWidget *parent = 0);
    ~PconputerTest2();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::PconputerTest2 *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PCONPUTERTEST2_H
