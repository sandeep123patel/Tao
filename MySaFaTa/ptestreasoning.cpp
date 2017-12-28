#include "ptestreasoning.h"
#include "ui_ptestreasoning.h"

ptestreasoning::ptestreasoning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ptestreasoning)
{
    ui->setupUi(this);
}

ptestreasoning::~ptestreasoning()
{
    delete ui;
}
