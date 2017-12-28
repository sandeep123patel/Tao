#ifndef PTESTSET2_H
#define PTESTSET2_H

#include <QMainWindow>

namespace Ui {
class PtestSet2;
}

class PtestSet2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PtestSet2(QWidget *parent = 0);
    ~PtestSet2();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::PtestSet2 *ui;
};

#endif // PTESTSET2_H
