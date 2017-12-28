#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "page1.h"
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
    page1 pag1;
    pag1.setModal(true);
    pag1.exec();
}
