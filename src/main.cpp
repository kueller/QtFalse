#include "qtfalse.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtFalse w;
    w.show();

    return a.exec();
}
