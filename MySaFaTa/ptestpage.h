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

private:
    Ui::Ptestpage *ui;
};

#endif // PTESTPAGE_H
