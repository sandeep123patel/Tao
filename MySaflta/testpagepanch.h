#ifndef TESTPAGEPANCH_H
#define TESTPAGEPANCH_H

#include <QMainWindow>

namespace Ui {
class TestpagePanch;
}

class TestpagePanch : public QMainWindow
{
    Q_OBJECT

public:
    explicit TestpagePanch(QWidget *parent = 0);
    ~TestpagePanch();

private:
    Ui::TestpagePanch *ui;
};

#endif // TESTPAGEPANCH_H
