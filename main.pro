QT += widgets
TARGET = NimQt
TEMPLATE = lib
CONFIG += release
CONFIG += staticlib
SOURCES += main.cpp mainwindow.cpp
HEADERS +=  mainwindow.h
FORMS += mainwindow.ui

OBJECTS_DIR = qtcache/obj
MOC_DIR = qtcache/moc
RCC_DIR = qtcache/rcc
UI_DIR = qtcache/ui