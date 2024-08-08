cmake_minimum_required(VERSION 3.28)
project(Snake)

set(CMAKE_CXX_STANDARD 17)

add_executable(Snake main.cpp
        Snake.cpp
        World.cpp
        Game.cpp
        Window.cpp
        Textbox.cpp
)
include_directories(/usr/local/include)

find_package(SFML 2.5 COMPONENTS system window graphics network audio REQUIRED)
include_directories(${SFML_INCLUDE_DIRECTORIES})
target_link_libraries(Snake sfml-system sfml-window sfml-graphics sfml-audio sfml-network)
