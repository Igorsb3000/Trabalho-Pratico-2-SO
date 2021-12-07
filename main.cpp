#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Project made by: Wesley Gurgel e Igor Silva
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
