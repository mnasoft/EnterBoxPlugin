CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(mnasoft_eb)
TEMPLATE    = lib

INCLUDEPATH += src
INCLUDEPATH += ../mnasoft_lib \
               ../mnasoft_lib/ns_MNAS_CodePage \
               ../mnasoft_lib/ns_MNAS_Error \
               ../mnasoft_lib/ns_MNAS_ValDimension \
               ../mnasoft_lib/ns_MNAS_Gases \
               ../mnasoft_lib/ns_MNAS_HalfDiv \
               ../mnasoft_lib/ns_MNAS_Matrix \
               ../mnasoft_lib/ns_MNAS_MendeleevTbl

HEADERS     =  src/EnterBoxPlugin.h mnasoft.h
SOURCES     =  src/EnterBoxPlugin.cpp mnasoft.cpp
RESOURCES   = icons.qrc
unix:LIBS  += -L. -L/usr/local/lib -lmnas
win32:LIBS += -L. E:/home/namatv/usr/bin/mnas.dll


greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(enterbox.pri)
