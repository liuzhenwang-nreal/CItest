#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    int* ptr = new int;
    //delete ptr;
    w.show();
    return a.exec();
}
