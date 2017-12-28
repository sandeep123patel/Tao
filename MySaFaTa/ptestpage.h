#ifndef PTESTPAGE_H
#define PTESTPAGE_H

#include <QDialog>

namespace Ui {
class Ptestpage;
}

class Ptestpage : public QDialog
{
    Q_OBJECT

public:
    explicit Ptestpage(QWidget *parent = 0);
    ~Ptestpage();

private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Ptestpage *ui;
};

#endif // PTESTPAGE_H
