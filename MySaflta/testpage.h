#ifndef TESTPAGE_H
#define TESTPAGE_H

#include <QMainWindow>
#include <QString>
namespace Ui {
class TestPage;
}

class TestPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestPage(QWidget *parent = 0);
    ~TestPage();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::TestPage *ui;
    int m_coun;
    int w_ans;
    int r_ans;
    QString r_msg;
    QString w_msg;
};

#endif // TESTPAGE_H
