#ifndef TESTPAGEMATH_H
#define TESTPAGEMATH_H

#include <QMainWindow>

namespace Ui {
class Testpagemath;
}

class Testpagemath : public QMainWindow
{
    Q_OBJECT

public:
    explicit Testpagemath(QWidget *parent = 0);
    ~Testpagemath();

private slots:
    void on_radioButton_clicked();

    void on_pushButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::Testpagemath *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTPAGEMATH_H
