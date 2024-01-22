cmake_minimum_required(VERSION 3.27)
project(FinalProject)

#include_directories(${CURSES_INCLUDE_DIR})
#include_directories(${SDL2_INCLUDE_DIR})

set(CMAKE_CXX_STANDARD 17)

add_executable(FinalProject
        main.cpp
        SDLAudioHandler.cpp
        SDLAudioHandler.hpp
)

# Add all headers files under the include directory
target_include_directories(${PROJECT_NAME} PRIVATE include)

# Add SDL2 library
find_package(SDL2 REQUIRED)

# Add ncurses library
find_package(Curses REQUIRED)

# Link libraries
target_link_libraries(${PROJECT_NAME} Curses SDL2::SDL2)