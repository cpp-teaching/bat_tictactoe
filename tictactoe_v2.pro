TEMPLATE = app
CONFIG += console c++11
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

