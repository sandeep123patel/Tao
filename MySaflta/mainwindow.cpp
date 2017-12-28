#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "testform.h"
#include "ptestform.h"
#include "loginpage.h"
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
    TestForm *tstf = new TestForm();
    tstf->setVisible(true);
    tstf->activateWindow();
    tstf->showFullScreen();
}

void MainWindow::on_pushButton_2_clicked()
{
    LoginPage *ptst = new LoginPage();
    ptst->setVisible(true);
    ptst->activateWindow();
    ptst->showFullScreen();
}
