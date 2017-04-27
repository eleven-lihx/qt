#-------------------------------------------------
#
# Project created by QtCreator 2017-04-25T17:26:25
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IntelligentCommunity
TEMPLATE = app


SOURCES += main.cpp\
        logindialog.cpp \
    managermanage.cpp \
    workmanage.cpp \
    onnermanage.cpp \
    hrmanage.cpp \
    systemparameter.cpp \
    workerinfo.cpp

HEADERS  += logindialog.h \
    managermanage.h \
    workmanage.h \
    onnermanage.h \
    hrmanage.h \
    systemparameter.h \
    workerinfo.h

FORMS    += logindialog.ui \
    managermanage.ui \
    workmanage.ui \
    onnermanage.ui \
    hrmanage.ui \
    systemparameter.ui \
    workerinfo.ui
