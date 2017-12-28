#include "ptestmath.h"
#include "ui_ptestmath.h"
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QMessageBox>
#include "instruction.h"
#include "resultmain.h"
#include <QString>
PtestMath::PtestMath(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PtestMath),m_coun(202),w_ans(0),r_ans(0),r_msg("Total Correct Answers - कुल सही उत्तर: %1"),w_msg("Total number of questions attempted - प्रयास किये गए कुल प्रश्नों की संख्या: %1")
{
    ui->setupUi(this);
}

PtestMath::~PtestMath()
{
    delete ui;
}

void PtestMath::on_pushButton_clicked()
{
    ui->A->setStyleSheet("color:black");
     ui->B->setStyleSheet("color:black");
      ui->C->setStyleSheet("color:black");
       ui->D->setStyleSheet("color:black");
       this->ui->radioButton->setAutoExclusive(false);
       this->ui->radioButton->setChecked(false);
       this->ui->radioButton_2->setAutoExclusive(false);
       this->ui->radioButton_2->setChecked(false);
       this->ui->radioButton_3->setAutoExclusive(false);
        this->ui->radioButton_3->setChecked(false);
        this->ui->radioButton_4->setAutoExclusive(false);
        this->ui->radioButton_4->setChecked(false);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("mysaflata.cgaqtjjdhgni.ap-south-1.rds.amazonaws.com");
    db.setUserName("robodia");
    db.setPassword("robodia123");
    db.setDatabaseName("saflta");
    if(db.open()){
        if (m_coun < 301){
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

            ui->A->setText(a);
            ui->B->setText(b);
            ui->C->setText(c);
            ui->D->setText(d);
            ui->no->setText(ans_qu);
            ui->no->setStyleSheet("color:white");
            ui->yes->setText(dis);
            ui->yes->setStyleSheet("color:white");
            ui->sandeep->setText(ques);
        }
        }

        else {

            QMessageBox::information(this,"Result",r_msg.arg(r_ans)+"\n"+w_msg.arg(w_ans)+ "\nMaximum Possible marks - अधिकतम संभव अंक: 100");
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

void PtestMath::on_radioButton_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("A" == s){
     ui->A->setStyleSheet("color:green");
     ui->B->setText("");
     ui->C->setText("");
     ui->D->setText("");
     ++r_ans;
     ++w_ans;

    QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
              if(y.length() > 1){

                      QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
              }



    }
    else {
        ++w_ans;
            ui->A->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }
    }
}

void PtestMath::on_radioButton_2_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("B" == s){
     ui->B->setStyleSheet("color:green");
     ui->A->setText("");
     ui->C->setText("");
     ui->D->setText("");
    ++r_ans;
     ++w_ans;
     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }



    }
    else {
        ++w_ans;
            ui->B->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}

void PtestMath::on_radioButton_3_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("C" == s){
     ++r_ans;
     ++w_ans;

     ui->C->setStyleSheet("color:green");
     ui->B->setText("");
     ui->A->setText("");
     ui->D->setText("");

     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }




    }
    else {
        ++w_ans;
            ui->C->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}

void PtestMath::on_radioButton_4_clicked()
{
    QString s,y;
    s = ui->no->text();
    y = ui->yes->text();
    if("D" == s){
        ++r_ans;
        ++w_ans;

     ui->D->setStyleSheet("color:green");
     ui->B->setText("");
     ui->C->setText("");
     ui->A->setText("");

     QMessageBox::information(this,"Correct Answer - सही जवाब!","Correct Answer - सही जवाब! ");
               if(y.length() > 1){

                       QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
               }



    }
    else {
        ++w_ans;
            ui->D->setStyleSheet("color:red");

            QMessageBox::warning(this,"Your Answer in worng","right answer is: "+s);
            if(y.length() > 1){

                    QMessageBox::information(this,"Description of your answer-उत्तर का विवरण ",y);
            }

    }
}
