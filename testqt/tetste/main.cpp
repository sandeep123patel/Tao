#include "mainwindow.h"
#include <QApplication>
#include "secondwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    SecondWindow s;
    s.show();
    return a.exec();
}
