#-------------------------------------------------
#
# Project created by QtCreator 2013-11-09T00:40:27
#
#-------------------------------------------------

QT       += core network multimedia

QT       -= gui

TARGET = grooveshark
CONFIG   += console
CONFIG   += c++11
CONFIG   -= app_bundle
TEMPLATE = app


SOURCES += main.cpp \
    lib/grooveshark/qplayer.cpp \
    lib/grooveshark/qgroovesession.cpp \
    lib/grooveshark/qrequest.cpp \
    qserver.cpp \
    qconfig.cpp \
    qserverchildthread.cpp

HEADERS += \
    lib/grooveshark/qplayer.h \
    lib/grooveshark/qgroovesession.h \
    lib/grooveshark/qrequest.h \
    qserver.h \
    qconfig.h \
    qserverchildthread.h
