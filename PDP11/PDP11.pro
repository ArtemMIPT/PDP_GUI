#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T14:04:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PDP11
TEMPLATE = app


SOURCES += main.cpp\
        mainwidget.cpp \
    pdp.cpp \
    image.cpp

HEADERS  += mainwidget.h \
    pdp.h \
    image.h

FORMS    += mainwidget.ui
