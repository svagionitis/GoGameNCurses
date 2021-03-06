PROJECT(GoGameNCurses C)

CMAKE_MINIMUM_REQUIRED(VERSION 2.6.0)

SET(CMAKE_COLOR_MAKEFILE ON)
SET(CMAKE_VERBOSE_MAKEFILE ON)

SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

FIND_PACKAGE(Threads REQUIRED)
FIND_PACKAGE(Curses REQUIRED)

SET(CMAKE_C_FLAGS "-D_BSD_SOURCE -std=c99 -Wall -W -O2")

SET(LIBS ${CMAKE_THREAD_LIBS_INIT} ncurses)

INCLUDE_DIRECTORIES(include)

# Set the source file
SET(GOGAMENCURSES_SRC src/utils.c
		     src/header.c
		     src/footer.c
		     src/control.c
		     src/main_win.c
		     src/main.c)

ADD_EXECUTABLE(gogame ${GOGAMENCURSES_SRC})

TARGET_LINK_LIBRARIES (gogame ${LIBS})

# Set simple go game, no ncurses
SET(GOGAMESIMPLE_SRC src/main_simple.c)
ADD_EXECUTABLE(go ${GOGAMESIMPLE_SRC})

