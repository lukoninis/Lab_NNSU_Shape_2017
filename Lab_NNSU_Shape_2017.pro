TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape/rectangle.cpp

HEADERS += \
    shape/shape.h \
    shape/rectangle.h
