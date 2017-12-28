#ifndef PTESTREASONING_H
#define PTESTREASONING_H

#include <QDialog>

namespace Ui {
class ptestreasoning;
}

class ptestreasoning : public QDialog
{
    Q_OBJECT

public:
    explicit ptestreasoning(QWidget *parent = 0);
    ~ptestreasoning();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ptestreasoning *ui;
};

#endif // PTESTREASONING_H
