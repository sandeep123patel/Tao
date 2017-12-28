#ifndef SETTAB_H
#define SETTAB_H

#include <QMainWindow>

namespace Ui {
class SetTab;
}

class SetTab : public QMainWindow
{
    Q_OBJECT

public:
    explicit SetTab(QWidget *parent = 0);
    ~SetTab();

private:
    Ui::SetTab *ui;
};

#endif // SETTAB_H
