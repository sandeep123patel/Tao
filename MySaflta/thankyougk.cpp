#include "thankyougk.h"
#include "ui_thankyougk.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include <QObject>
#include "testpage.h"

Thankyougk::Thankyougk(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Thankyougk)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: white");

}

Thankyougk::~Thankyougk()
{
    delete ui;
}

void Thankyougk::messageChange()
{
    ++m_count;
    emit domessange(m_message.arg(m_count));
}

void Thankyougk::on_pushButton_clicked()
{
    TestPage *tpg = new TestPage();
    tpg->setVisible(true);
    tpg->activateWindow();
    tpg->showFullScreen();
    this->close();
}
