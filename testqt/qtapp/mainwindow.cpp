#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    SainWindow *frind = new SainWindow();
    frind->setVisible(true);
    frind->activateWindow();
    frind->show();
}
