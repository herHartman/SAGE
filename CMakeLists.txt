cmake_minimum_required( VERSION 3.1 )

set(PROJECT_NAME Engine3D)

project( ${PROJECT_NAME} VERSION 0.1.0)

add_executable( ${PROJECT_NAME} main.cpp src/Engine.cpp src/Engine.h)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)

add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)

