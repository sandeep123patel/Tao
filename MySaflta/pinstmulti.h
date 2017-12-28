#ifndef PINSTMULTI_H
#define PINSTMULTI_H

#include <QMainWindow>

namespace Ui {
class PinstMulti;
}

class PinstMulti : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstMulti(QWidget *parent = 0);
    ~PinstMulti();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PinstMulti *ui;
};

#endif // PINSTMULTI_H
