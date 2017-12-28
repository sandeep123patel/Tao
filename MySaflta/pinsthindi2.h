#ifndef PINSTHINDI2_H
#define PINSTHINDI2_H

#include <QMainWindow>

namespace Ui {
class PinstHindi2;
}

class PinstHindi2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinstHindi2(QWidget *parent = 0);
    ~PinstHindi2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PinstHindi2 *ui;
};

#endif // PINSTHINDI2_H
