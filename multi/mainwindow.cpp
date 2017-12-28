#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include "text.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
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
     ui->Result->setText("NO");
    }


}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    text sa;
    sa.setModal(true);
    sa.exec();
}
