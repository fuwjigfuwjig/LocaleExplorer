QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = "Locale Explorer"
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS



SOURCES += \
    locale.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    StringUtilities.h \
    locale.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

macx {
CONFIG+=sdk_no_version_check
#disable dark gui
QMAKE_POST_LINK += plutil -replace NSRequiresAquaSystemAppearance -bool YES "\"$$OUT_PWD/$${TARGET}.app/Contents/Info.plist\"";

LIBS += -L/usr/local/opt/icu4c/lib/ -licuuc -licutu -licutest -licuio -licui18n -licudata
INCLUDEPATH += /usr/local/opt/icu4c/include
DEPENDPATH += /usr/local/opt/icu4c/include
}
