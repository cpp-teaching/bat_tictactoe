TEMPLATE = app
CONFIG += c++14


CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    board.cpp \
    game.cpp \
    player.cpp

HEADERS += \
    board.h \
    game.h \
    playermove.h \
    player.h

