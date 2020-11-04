cmake_minimum_required(VERSION 3.16)
project(opengl_app)
set(TARGET_NAME run)

link_directories(lib)
include_directories(include)

add_library(GLAD thirdparty/glad.c)

file(GLOB_RECURSE SOURCE_FILES src/*.c src/*.cpp)
file(GLOB_RECURSE HEADER_FILES include/*.h)
add_executable(${TARGET_NAME} ${SOURCE_FILES} ${HEADER_FILES})
target_link_libraries(${TARGET_NAME} opengl32 glfw3 GLAD)