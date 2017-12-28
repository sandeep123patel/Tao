#ifndef THANKYOUREASONING_H
#define THANKYOUREASONING_H

#include <QDialog>

namespace Ui {
class Thankyoureasoning;
}

class Thankyoureasoning : public QDialog
{
    Q_OBJECT

public:
    explicit Thankyoureasoning(QWidget *parent = 0);
    ~Thankyoureasoning();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Thankyoureasoning *ui;
};

#endif // THANKYOUREASONING_H
