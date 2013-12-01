include(config.pri)

TEMPLATE = lib
TARGET = MyBanner

DEFINES += BB_CASCADES_MY_LIB

CONFIG += qt warn_on
LIBS += -lbbsystem -lbbnetwork -lbbplatform -lbbdata

INCLUDEPATH += ../public
//SOURCES += ../src/*.cpp
HEADERS += ../public/*.hpp ../public/*.h