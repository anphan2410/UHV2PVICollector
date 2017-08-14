#include "uhv2pvicollectordb.h"

UHV2PVICollectorDB::UHV2PVICollectorDB(QObject *parent) : QObject(parent)
{
    anIf(UHV2PVICollectorDBDbgEn, anTrk("Construct Object"));
    localDb = QSqlDatabase::addDatabase("QMYSQL");
    localDb.setHostName("localhost");
    localDb.setDatabaseName("raspberry");
    localDb.setUserName("root");
    localDb.setPassword("Ascenx123");
    localDb.setPort(3306);
    if (localDb.open())
    {
        anIf(UHV2PVICollectorDBDbgEn, anAck("OK Local Database Connected !"));
        currentQuery = QSqlQuery();
        currentGlobalID = 0;
    }
    else
    {
        anIf(UHV2PVICollectorDBDbgEn, anError("Failed To Connect Local Database !"));
        emit errorOccurred();
    }
}
