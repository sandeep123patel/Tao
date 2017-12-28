#ifndef PINTERUCTIONCOMPUTER_H
#define PINTERUCTIONCOMPUTER_H

#include <QMainWindow>

namespace Ui {
class PinteructionComputer;
}

class PinteructionComputer : public QMainWindow
{
    Q_OBJECT

public:
    explicit PinteructionComputer(QWidget *parent = 0);
    ~PinteructionComputer();

private slots:
    void on_pushButton_clicked();

private:
    Ui::PinteructionComputer *ui;
};

#endif // PINTERUCTIONCOMPUTER_H
