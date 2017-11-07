TEMPLATE = app
CONFIG += console c++14
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    shape/rectangle.cpp \
    shape/circle.cpp \
    shape/triangle.cpp

HEADERS += \
    shape/shape.h \
    shape/rectangle.h \
    shape/circle.h \
    shape/triangle.h
