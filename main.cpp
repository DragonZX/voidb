#include "voimembers.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VOIMembers w;
    w.show();

    return a.exec();
}
