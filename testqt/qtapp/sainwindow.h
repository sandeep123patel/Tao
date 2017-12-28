#ifndef SAINWINDOW_H
#define SAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class SainWindow;
}

class SainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SainWindow(QWidget *parent = 0);
    ~SainWindow();

private:
    Ui::SainWindow *ui;
};

#endif // SAINWINDOW_H
