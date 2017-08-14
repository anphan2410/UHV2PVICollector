#ifndef UHV2PVICOLLECTOR_H
#define UHV2PVICOLLECTOR_H

#define UHV2PVICollectorDbgEn 1

#include <QStateMachine>
#include <QObject>

class UHV2PVICollector : public QStateMachine
{
    Q_OBJECT
public:
    UHV2PVICollector();
signals:
public slots:
    void pause();
    void resume();
};

#endif // UHV2PVICOLLECTOR_H
