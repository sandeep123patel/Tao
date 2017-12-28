#ifndef PAGE17_H
#define PAGE17_H

#include <QDialog>

namespace Ui {
class page17;
}

class page17 : public QDialog
{
    Q_OBJECT

public:
    explicit page17(QWidget *parent = 0);
    ~page17();

private:
    Ui::page17 *ui;
};

#endif // PAGE17_H
