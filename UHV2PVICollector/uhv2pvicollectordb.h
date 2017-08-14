#ifndef UHV2PVICOLLECTORDB_H
#define UHV2PVICOLLECTORDB_H

#define UHV2PVICollectorDBDbgEn 1

#include <QObject>
#include "anlogger.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QByteArray>

class UHV2PVICollectorDB : public QObject
{
    Q_OBJECT
public:
    explicit UHV2PVICollectorDB(QObject *parent = nullptr);
    quint32 currentGlobalID;
    QSqlDatabase *localDb;
    QSqlQuery currentQuery;
signals:
    void errorOccurred();
    void pause();
    void directTransitionRequest(const QString &);
public slots:

};

#endif // UHV2PVICOLLECTORDB_H
