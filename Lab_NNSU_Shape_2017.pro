TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape/rectangle.cpp \
    shape/circle.cpp

HEADERS += \
    shape/shape.h \
    shape/rectangle.h \
    shape/circle.h
