#ifndef PTESTGK_H
#define PTESTGK_H

#include <QMainWindow>

namespace Ui {
class Ptestgk;
}

class Ptestgk : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestgk(QWidget *parent = 0);
    ~Ptestgk();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::Ptestgk *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // PTESTGK_H
