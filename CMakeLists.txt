cmake_minimum_required( VERSION 3.1 )

set(PROJECT_NAME Engine3D)

project( ${PROJECT_NAME} VERSION 0.1.0)

add_executable( ${PROJECT_NAME} main.cpp)

target_link_libraries( ${PROJECT_NAME} SDL2main SDL2 GL)

