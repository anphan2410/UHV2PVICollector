#ifndef EMITREADP_H
#define EMITREADP_H

#include <QState>
#include "uhv2pvicollectordb.h"

class emitReadP : public QState
{
public:
    emitReadP(UHV2PVICollectorDB * database);
};

#endif // EMITREADP_H
