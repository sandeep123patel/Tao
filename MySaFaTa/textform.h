#ifndef TEXTFORM_H
#define TEXTFORM_H

#include <QDialog>

namespace Ui {
class Textform;
}

class Textform : public QDialog
{
    Q_OBJECT

public:
    explicit Textform(QWidget *parent = 0);
    ~Textform();

private slots:
    void on_pushButton_5_clicked();


    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::Textform *ui;
};

#endif // TEXTFORM_H
