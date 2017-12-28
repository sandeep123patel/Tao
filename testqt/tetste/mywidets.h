#ifndef MYWIDETS_H
#define MYWIDETS_H

#include <QWidget>

namespace Ui {
class mywidets;
}

class mywidets : public QWidget
{
    Q_OBJECT

public:
    explicit mywidets(QWidget *parent = 0);
    ~mywidets();

private:
    Ui::mywidets *ui;
};

#endif // MYWIDETS_H
