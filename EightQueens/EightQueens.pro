#-------------------------------------------------
#
# Project created by QtCreator 2016-10-30T19:00:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EightQueens
TEMPLATE = app


SOURCES += main.cpp\
        eightqueens.cpp

HEADERS  += eightqueens.h \
    geneticalgorithm.h \
    chromosome.h

FORMS    += eightqueens.ui
RESOURCES=resources.qrc
ICON = myicon.icns
