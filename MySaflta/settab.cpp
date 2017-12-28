#include "settab.h"
#include "ui_settab.h"

SetTab::SetTab(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SetTab)
{
    ui->setupUi(this);
}

SetTab::~SetTab()
{
    delete ui;
}
