#include "testpagecomputer.h"
#include "ui_testpagecomputer.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "instruction.h"
#include "resultmain.h"
#include <QString>
TestpageComputer::TestpageComputer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TestpageComputer),m_coun(82),w_ans(0),r_ans(0),r_msg("Total Correct Answers - कुल सही उत्तर: %1"),w_msg("Total number of questions attempted - प्रयास किये गए कुल प्रश्नों की संख्या: %1")
{
    ui->setupUi(this);
}

TestpageComputer::~TestpageComputer()
{
    delete ui;
}

void TestpageComputer::on_pushButton_2_clicked()
{
    ui->A_2->setStyleSheet("color:black");
     ui->B_2->setStyleSheet("color:black");
      ui->C_2->setStyleSheet("color:black");
       ui->D_2->setStyleSheet("color:black");

     this->ui->radioButton_5->setAutoExclusive(false);
     this->ui->radioButton_5->setChecked(false);
     this->ui->radioButton_6->setAutoExclusive(false);
     this->ui->radioButton_6->setChecked(false);
     this->ui->radioButton_7->setAutoExclusive(false);
     this->ui->radioButton_7->setChecked(false);
     this->ui->radioButton_8->setAutoExclusive(false);
     this->ui->radioButton_8->setChecked(false);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysaflata.cgaqtjjdhgni.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("saflta");
    if(db.open()){
        if (m_coun < 86){
            QSqlQuery qry;

            qry.prepare("SELECT Questions,A,B,C,D,Answer,Discription FROM app WHERE id=:id_u");
            qry.bindValue(":id_u",m_coun);
            qry.exec();
            while(qry.next()){
            QString ques = qry.value(0).toString();
            QString a = qry.value(1).toString();
            QString b = qry.value(2).toString();
            QString c = qry.value(3).toString();
            QString d = qry.value(4).toString();
            QString ans_qu= qry.value(5).toString();
            QString dis = qry.value(6).toString();
            qDebug() << ques << a << b << c << d<< ans_qu << dis;

            ui->A_2->setText(a);
            ui->B_2->setText(b);
            ui->C_2->setText(c);
            ui->D_2->setText(d);
            ui->no->setText(ans_qu);
            ui->no->setStyleSheet("color:white");
            ui->yes->setText(dis);
            ui->yes->setStyleSheet("color:white");
            ui->sandeep_2->setText(ques);
        }
        }

        else {

            QMessageBox::information(this,"Result",r_msg.arg(r_ans)+"\n"+w_msg.arg(w_ans)+ "\nMaximum Possible marks - अधिकतम संभव अंक  5");
            Instruction *ins = new Instruction();
            ins->setVisible(true);
            ins->activateWindow();
            ins->showFullScreen();
            this->close();
        }

    }
    else {
        QMessageBox::warning(this,"Waring","Please check your internet कनेक्शन - कृपया अपना इन्टरनेट कनेक्शन चेक करें.");

    }

    ++m_coun;
}

void TestpageComputer::on_radioButton_5_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A_2->setStyleSheet("color:green");
     ui->B_2->setText("");
     ui->C_2->setText("");
     ui->D_2->setText("");
     ++r_ans;
     ++w_ans;

    QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
              if(y.length() > 1){

                      QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
              }



    }
    else {
        ++w_ans;
            ui->A_2->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }
    }
}

void TestpageComputer::on_radioButton_6_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("B" == s){
     ui->B_2->setStyleSheet("color:green");
     ui->A_2->setText("");
     ui->C_2->setText("");
     ui->D_2->setText("");
    ++r_ans;
     ++w_ans;
     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }



    }
    else {
        ++w_ans;
            ui->B_2->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}

void TestpageComputer::on_radioButton_7_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("C" == s){
     ++r_ans;
     ++w_ans;

     ui->D_2->setStyleSheet("color:green");
     ui->B_2->setText("");
     ui->A_2->setText("");
     ui->D_2->setText("");

     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }




    }
    else {
        ++w_ans;
            ui->C_2->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}

void TestpageComputer::on_radioButton_8_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("D" == s){
        ++r_ans;
        ++w_ans;

     ui->D_2->setStyleSheet("color:green");
     ui->B_2->setText("");
     ui->A_2->setText("");
     ui->C_2->setText("");

     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }



    }
    else {
        ++w_ans;
            ui->D_2->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}
