#-------------------------------------------------
#
# Project created by QtCreator 2015-05-12T14:06:55
#
#-------------------------------------------------

QT       += core gui sql
CONFIG   += C++14


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = backOfficeNW
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    connexion.cpp \
    gestion.cpp \
    moderation.cpp \
    moderationarticle.cpp

HEADERS  += mainwindow.h \
    connexion.h \
    gestion.h \
    moderation.h \
    moderationarticle.h

FORMS    += mainwindow.ui \
    connexion.ui \
    gestion.ui \
    moderation.ui \
    moderationarticle.ui
