#include "loginpage.h"
#include "ui_loginpage.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "instruction.h"
#include "resultmain.h"
#include <QString>
#include "ptestform.h"
#include <QDesktopServices>
#include <QUrl>
LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::on_pushButton_2_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysaflata.cgaqtjjdhgni.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("saflta");

    if(db.open()){
        QSqlQuery qry;
        QString phn;
        phn = ui->phone->text();

        if(!(phn == "")){
            if(qry.exec("SELECT Phone FROM user_data WHERE Phone = '"+phn+"'")){



                    if (qry.next()){


                    Ptestform *ptfm = new Ptestform();
                    ptfm->setVisible(true);
                    ptfm->activateWindow();
                    ptfm->showFullScreen();

                }
                    else
                        {
                              QString msg = "Your Phone number is not registered - आपका फ़ोन नंबर हमारे पास दर्ज नहीं है. कृपया “साइन अप ( sign up) “ करके नया अकाउंट बनाये.";
                             QMessageBox::warning(this,"Information",msg);
                         }



            }
//                if (count ==1)
//                {
//                   Ptestform *ptfm = new Ptestform();
//                   ptfm->setVisible(true);
//                   ptfm->activateWindow();
//                   ptfm->showFullScreen();

//                  }




        }





        else {

                QString msg = "Please fill up all entries - कृपया सभी जानकारियाँ भरें. ";
                QMessageBox::warning(this,"Fill-Up Information",msg);

            }




        }
    else{
        QString msg = "Please check your internet कनेक्शन - कृपया अपना इन्टरनेट कनेक्शन चेक करें.";
        QMessageBox::warning(this,"Fill-Up Information",msg);
    }


    }


void LoginPage::on_pushButton_clicked()
{
    QString link = "http://ec2-13-126-76-17.ap-south-1.compute.amazonaws.com/MySafalta/payment";
    QDesktopServices::openUrl(QUrl(link));
}
