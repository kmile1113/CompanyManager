TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    employee.cpp \
    date.cpp \
    salasman.cpp \
    salamanager.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    employee.h \
    date.h \
    salasman.h \
    salamanager.h

