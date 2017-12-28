#ifndef PTESTSET3_H
#define PTESTSET3_H

#include <QMainWindow>

namespace Ui {
class Ptestset3;
}

class Ptestset3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestset3(QWidget *parent = 0);
    ~Ptestset3();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Ptestset3 *ui;
};

#endif // PTESTSET3_H
