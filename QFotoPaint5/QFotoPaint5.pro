#-------------------------------------------------
#
# Project created by QtCreator 2022-09-01T12:00:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QFotoPaint5

TEMPLATE = app

CONFIG += c++11

SOURCES += main.cpp\
    ajustecolor.cpp \
    ajustelineal.cpp \
    bajorelieve.cpp \
    capturarvideo.cpp \
    colorfalso.cpp \
    ecualizar.cpp \
    infoimagen.cpp \
    mainwindow.cpp \
    imagenes.cpp \
    dialognueva.cpp \
    brillocontraste.cpp \
    matsatlum.cpp \
    movimiento.cpp \
    perfilado.cpp \
    perspectiva.cpp \
    pincharestirar.cpp \
    rotarangulo.cpp \
    suavizados.cpp \
    video.cpp \
    rotaravideo.cpp \
    mediaponderada.cpp \
    acercade.cpp \
    mediadevideo.cpp

HEADERS  += mainwindow.h \
    ajustecolor.h \
    ajustelineal.h \
    bajorelieve.h \
    capturarvideo.h \
    colorfalso.h \
    ecualizar.h \
    imagenes.h \
    dialognueva.h \
    brillocontraste.h \
    infoimagen.h \
    matsatlum.h \
    movimiento.h \
    perfilado.h \
    perspectiva.h \
    pincharestirar.h \
    rotarangulo.h \
    suavizados.h \
    video.h \
    rotaravideo.h \
    mediaponderada.h \
    acercade.h \
    mediadevideo.h

FORMS    += mainwindow.ui \
    ajustecolor.ui \
    ajustelineal.ui \
    bajorelieve.ui \
    capturarvideo.ui \
    colorfalso.ui \
    dialognueva.ui \
    brillocontraste.ui \
    ecualizar.ui \
    infoimagen.ui \
    matsatlum.ui \
    movimiento.ui \
    perfilado.ui \
    perspectiva.ui \
    pincharestirar.ui \
    rotarangulo.ui \
    suavizados.ui \
    rotaravideo.ui \
    mediaponderada.ui \
    acercade.ui \
    mediadevideo.ui

INCLUDEPATH += "C:\OpenCV\OpenCV4.6.0G\include"

LIBS += -L"C:\OpenCV\OpenCV4.6.0G\lib"\
        -llibopencv_world460

RESOURCES += recursos.qrc

RC_ICONS = imagenes/icono.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
