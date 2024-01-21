cmake_minimum_required(VERSION 3.20)
#set(CMAKE_VERBOSE_MAKEFILE ON)

project(SDL_Boilerplate)

set(CMAKE_C_STANDARD 23)
set(CMAKE_BUILD_TYPE Debug)

file(GLOB SOURCES src/*c)
add_executable(${PROJECT_NAME} ${SOURCES})
include_directories(${CMAKE_SOURCE_DIR}/lib)
link_directories(${CMAKE_SOURCE_DIR}/src)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})

target_link_libraries(${PROJECT_NAME} m)
target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Werror -lm)