#ifndef PTESTCOMPUTER_H
#define PTESTCOMPUTER_H

#include <QDialog>

namespace Ui {
class ptestcomputer;
}

class ptestcomputer : public QDialog
{
    Q_OBJECT

public:
    explicit ptestcomputer(QWidget *parent = 0);
    ~ptestcomputer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ptestcomputer *ui;
};

#endif // PTESTCOMPUTER_H
