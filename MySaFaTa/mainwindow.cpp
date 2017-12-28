#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "textform.h"
#include "form2.h"
#include "form.h"
#include "instruction.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
      this->setStyleSheet("background-color: white");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Textform tst;
   tst.setModal(true);
    tst.exec();
}

void MainWindow::on_pushButton_2_clicked()
{

Instruction pins;
pins.setModal(true);
pins.exec();

}
