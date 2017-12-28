#include "intstructionhindi.h"
#include "ui_intstructionhindi.h"
#include "testpagehindi.h"
IntstructionHindi::IntstructionHindi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::IntstructionHindi)
{
    ui->setupUi(this);
}

IntstructionHindi::~IntstructionHindi()
{
    delete ui;
}

void IntstructionHindi::on_pushButton_clicked()
{
    TestpageHindi *thnd = new TestpageHindi();
    thnd->setVisible(true);
    thnd->activateWindow();
    thnd->showFullScreen();
    this->close();
}
