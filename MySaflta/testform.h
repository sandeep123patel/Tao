#ifndef TESTFORM_H
#define TESTFORM_H

#include <QMainWindow>

namespace Ui {
class TestForm;
}

class TestForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestForm(QWidget *parent = 0);
    ~TestForm();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::TestForm *ui;
};

#endif // TESTFORM_H
