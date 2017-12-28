#include "resultshow.h"
#include "ui_resultshow.h"

Resultshow::Resultshow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Resultshow)
{
    ui->setupUi(this);
}

Resultshow::~Resultshow()
{
    delete ui;
}
