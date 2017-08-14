QT += core sql
QT -= gui

CONFIG += c++11

TARGET = UHV2PVICollector
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    main.cpp \
    UHV2PVICollector/uhv2pvicollector.cpp \
    UHV2PVICollector/uhv2pvicollectordb.cpp \
    UHV2PVICollector/emitreadp.cpp \
    UHV2PVICollector/wait4p.cpp \
    UHV2PVICollector/emitreadv.cpp \
    UHV2PVICollector/wait4v.cpp \
    UHV2PVICollector/emitreadi.cpp \
    UHV2PVICollector/wait4i.cpp \
    UHV2PVICollector/directtransition.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    UHV2PVICollector/uhv2pvicollector.h \
    UHV2PVICollector/uhv2pvicollectordb.h \
    UHV2PVICollector/emitreadp.h \
    UHV2PVICollector/wait4p.h \
    UHV2PVICollector/emitreadv.h \
    UHV2PVICollector/wait4v.h \
    UHV2PVICollector/emitreadi.h \
    UHV2PVICollector/wait4i.h \
    UHV2PVICollector/directtransition.h
