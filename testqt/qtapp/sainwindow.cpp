#include "sainwindow.h"
#include "ui_sainwindow.h"

SainWindow::SainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SainWindow)
{
    ui->setupUi(this);
}

SainWindow::~SainWindow()
{
    delete ui;
}
