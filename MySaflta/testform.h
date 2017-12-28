#ifndef TESTFORM_H
#define TESTFORM_H

#include <QMainWindow>

namespace Ui {
class TestForm;
}

class TestForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestForm(QWidget *parent = 0);
    ~TestForm();

private:
    Ui::TestForm *ui;
};

#endif // TESTFORM_H
