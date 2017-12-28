#ifndef TESTGK_H
#define TESTGK_H

#include <QDialog>

namespace Ui {
class testgk;
}

class testgk : public QDialog
{
    Q_OBJECT

public:
    explicit testgk(QWidget *parent = 0);
    ~testgk();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

private:
    Ui::testgk *ui;
};

#endif // TESTGK_H
