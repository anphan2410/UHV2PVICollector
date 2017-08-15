#include <QCoreApplication>
#include "UHV2PVICollector/uhv2pvicollector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    UHV2PVICollector test;
    test.start();
    return a.exec();
}
