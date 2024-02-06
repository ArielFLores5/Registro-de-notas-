QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acercadeform.cpp \
    estudiante.cpp \
    ingresodatosform.cpp \
    main.cpp \
    cuadronotas.cpp

HEADERS += \
    acercadeform.h \
    cuadronotas.h \
    estudiante.h \
    ingresodatosform.h

FORMS += \
    acercadeform.ui \
    cuadronotas.ui \
    ingresodatosform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
