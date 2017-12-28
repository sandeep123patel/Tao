#ifndef PTESTFORM_H
#define PTESTFORM_H

#include <QMainWindow>

namespace Ui {
class Ptestform;
}

class Ptestform : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ptestform(QWidget *parent = 0);
    ~Ptestform();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Ptestform *ui;
};

#endif // PTESTFORM_H
