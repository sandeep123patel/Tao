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

private:
    Ui::Textform *ui;
};

#endif // TEXTFORM_H
