#ifndef PTESTSET4_H
#define PTESTSET4_H

#include <QMainWindow>

namespace Ui {
class Ptestset4;
}

class Ptestset4 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestset4(QWidget *parent = 0);
    ~Ptestset4();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Ptestset4 *ui;
};

#endif // PTESTSET4_H
