#include "mainwindow.h"
#include "ui_mainwindow.h"
# include <QtSql/QSqlDatabase>
#include <QDebug>

#include "test1.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->setupUi(this);
    this->setStyleSheet("background-color: white");
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("tao.c0tkhnmn8qhw.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("interviewfight_tao_data2");
    if(db.open()){
        ui->Result->setText("done:");

    }

    else {
        ui->Result->setText("no");
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_start_clicked()
{


}

void MainWindow::on_pushButton_clicked()
{
    test1 s;
    s.setModal(true);
    s.exec();
}
