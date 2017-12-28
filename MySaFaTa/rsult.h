#ifndef RSULT_H
#define RSULT_H

#include <QDialog>

namespace Ui {
class rsult;
}

class rsult : public QDialog
{
    Q_OBJECT

public:
    explicit rsult(QWidget *parent = 0);
    ~rsult();

private:
    Ui::rsult *ui;
};

#endif // RSULT_H
