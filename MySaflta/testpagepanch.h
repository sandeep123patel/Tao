#ifndef TESTPAGEPANCH_H
#define TESTPAGEPANCH_H

#include <QMainWindow>

namespace Ui {
class TestpagePanch;
}

class TestpagePanch : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpagePanch(QWidget *parent = 0);
    ~TestpagePanch();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::TestpagePanch *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTPAGEPANCH_H
