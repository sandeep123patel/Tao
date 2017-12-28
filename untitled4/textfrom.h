#ifndef TEXTFROM_H
#define TEXTFROM_H

#include <QWidget>

namespace Ui {
class Textfrom;
}

class Textfrom : public QWidget
{
    Q_OBJECT

public:
    explicit Textfrom(QWidget *parent = 0);
    ~Textfrom();

private:
    Ui::Textfrom *ui;
};

#endif // TEXTFROM_H
