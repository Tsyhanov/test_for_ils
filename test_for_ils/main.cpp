#include "vagonwindow.h"
//#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VagonWindow w;
    w.show();

    return a.exec();
}
