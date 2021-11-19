#include "mainwindow.h"
#include <QApplication>

QString keywordID;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
